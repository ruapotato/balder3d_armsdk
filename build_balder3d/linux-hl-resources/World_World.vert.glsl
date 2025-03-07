#version 330

uniform mat4 SMVP;

out vec3 normal;
in vec3 nor;
in vec3 pos;

void main()
{
    normal = nor;
    vec4 position = SMVP * vec4(pos, 1.0);
    gl_Position = vec4(position);
}

