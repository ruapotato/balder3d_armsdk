#version 330

uniform sampler2D gbuffer0;
uniform sampler2D gbuffer1;
uniform sampler2D gbufferD;
uniform vec3 eye;
uniform vec3 eyeLook;
uniform vec2 cameraProj;
uniform sampler2D senvmapBrdf;
uniform vec4 shirr[7];
uniform int envmapNumMipmaps;
uniform sampler2D senvmapRadiance;
uniform float envmapStrength;
uniform sampler2D ssaotex;
uniform sampler2D gbufferEmission;
uniform vec4 casData[20];

in vec2 texCoord;
in vec3 viewRay;
out vec4 fragColor;

vec2 octahedronWrap(vec2 v)
{
    return (vec2(1.0) - abs(v.yx)) * vec2((v.x >= 0.0) ? 1.0 : (-1.0), (v.y >= 0.0) ? 1.0 : (-1.0));
}

void unpackFloatInt16(float val, out float f, out uint i)
{
    uint bitsValue = uint(val);
    i = bitsValue >> 12u;
    f = float(bitsValue & 4294905855u) / 4095.0;
}

vec2 unpackFloat2(float f)
{
    return vec2(floor(f) / 255.0, fract(f));
}

vec3 surfaceAlbedo(vec3 baseColor, float metalness)
{
    return mix(baseColor, vec3(0.0), vec3(metalness));
}

vec3 surfaceF0(vec3 baseColor, float metalness)
{
    return mix(vec3(0.039999999105930328369140625), baseColor, vec3(metalness));
}

vec3 getPos(vec3 eye_1, vec3 eyeLook_1, vec3 viewRay_1, float depth, vec2 cameraProj_1)
{
    float linearDepth = cameraProj_1.y / (((depth * 0.5) + 0.5) - cameraProj_1.x);
    float viewZDist = dot(eyeLook_1, viewRay_1);
    vec3 wposition = eye_1 + (viewRay_1 * (linearDepth / viewZDist));
    return wposition;
}

vec3 shIrradiance(vec3 nor, vec4 shirr_1[7])
{
    vec3 cl00 = vec3(shirr_1[0].x, shirr_1[0].y, shirr_1[0].z);
    vec3 cl1m1 = vec3(shirr_1[0].w, shirr_1[1].x, shirr_1[1].y);
    vec3 cl10 = vec3(shirr_1[1].z, shirr_1[1].w, shirr_1[2].x);
    vec3 cl11 = vec3(shirr_1[2].y, shirr_1[2].z, shirr_1[2].w);
    vec3 cl2m2 = vec3(shirr_1[3].x, shirr_1[3].y, shirr_1[3].z);
    vec3 cl2m1 = vec3(shirr_1[3].w, shirr_1[4].x, shirr_1[4].y);
    vec3 cl20 = vec3(shirr_1[4].z, shirr_1[4].w, shirr_1[5].x);
    vec3 cl21 = vec3(shirr_1[5].y, shirr_1[5].z, shirr_1[5].w);
    vec3 cl22 = vec3(shirr_1[6].x, shirr_1[6].y, shirr_1[6].z);
    return ((((((((((cl22 * 0.429042994976043701171875) * ((nor.y * nor.y) - ((-nor.z) * (-nor.z)))) + (((cl20 * 0.743125021457672119140625) * nor.x) * nor.x)) + (cl00 * 0.88622701168060302734375)) - (cl20 * 0.2477079927921295166015625)) + (((cl2m2 * 0.85808598995208740234375) * nor.y) * (-nor.z))) + (((cl21 * 0.85808598995208740234375) * nor.y) * nor.x)) + (((cl2m1 * 0.85808598995208740234375) * (-nor.z)) * nor.x)) + ((cl11 * 1.02332794666290283203125) * nor.y)) + ((cl1m1 * 1.02332794666290283203125) * (-nor.z))) + ((cl10 * 1.02332794666290283203125) * nor.x);
}

float getMipFromRoughness(float roughness, float numMipmaps)
{
    return roughness * numMipmaps;
}

vec2 envMapEquirect(vec3 normal)
{
    float phi = acos(normal.z);
    float theta = atan(-normal.y, normal.x) + 3.1415927410125732421875;
    return vec2(theta / 6.283185482025146484375, phi / 3.1415927410125732421875);
}

void main()
{
    vec4 g0 = textureLod(gbuffer0, texCoord, 0.0);
    vec3 n;
    n.z = (1.0 - abs(g0.x)) - abs(g0.y);
    vec2 _302;
    if (n.z >= 0.0)
    {
        _302 = g0.xy;
    }
    else
    {
        _302 = octahedronWrap(g0.xy);
    }
    n = vec3(_302.x, _302.y, n.z);
    n = normalize(n);
    float roughness = g0.z;
    float param;
    uint param_1;
    unpackFloatInt16(g0.w, param, param_1);
    float metallic = param;
    uint matid = param_1;
    vec4 g1 = textureLod(gbuffer1, texCoord, 0.0);
    vec2 occspec = unpackFloat2(g1.w);
    vec3 albedo = surfaceAlbedo(g1.xyz, metallic);
    vec3 f0 = surfaceF0(g1.xyz, metallic);
    float depth = (textureLod(gbufferD, texCoord, 0.0).x * 2.0) - 1.0;
    vec3 p = getPos(eye, eyeLook, normalize(viewRay), depth, cameraProj);
    vec3 v = normalize(eye - p);
    float dotNV = max(dot(n, v), 0.0);
    vec2 envBRDF = texelFetch(senvmapBrdf, ivec2(vec2(dotNV, 1.0 - roughness) * 256.0), 0).xy;
    vec3 envl = shIrradiance(n, shirr);
    vec3 reflectionWorld = reflect(-v, n);
    float lod = getMipFromRoughness(roughness, float(envmapNumMipmaps));
    vec3 prefilteredColor = textureLod(senvmapRadiance, envMapEquirect(reflectionWorld), lod).xyz;
    envl *= albedo;
    envl *= (vec3(1.0) - ((f0 * envBRDF.x) + vec3(envBRDF.y)));
    envl += (prefilteredColor * ((f0 * envBRDF.x) + vec3(envBRDF.y)));
    envl *= (envmapStrength * occspec.x);
    fragColor = vec4(envl.x, envl.y, envl.z, fragColor.w);
    vec3 _468 = fragColor.xyz * textureLod(ssaotex, texCoord, 0.0).x;
    fragColor = vec4(_468.x, _468.y, _468.z, fragColor.w);
    vec3 emission = textureLod(gbufferEmission, texCoord, 0.0).xyz;
    vec3 _480 = fragColor.xyz + emission;
    fragColor = vec4(_480.x, _480.y, _480.z, fragColor.w);
    fragColor.w = 1.0;
}

