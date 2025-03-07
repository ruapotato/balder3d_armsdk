#version 330

uniform mat4 invVP;
uniform vec3 eye;

out vec2 texCoord;
in vec2 pos;
out vec3 viewRay;

void main()
{
    texCoord = (pos * vec2(0.5)) + vec2(0.5);
    gl_Position = vec4(pos, 0.0, 1.0);
    vec4 v = vec4(pos.x, pos.y, 1.0, 1.0);
    v = vec4(invVP * v);
    vec3 _62 = v.xyz / vec3(v.w);
    v = vec4(_62.x, _62.y, _62.z, v.w);
    viewRay = v.xyz - eye;
}

