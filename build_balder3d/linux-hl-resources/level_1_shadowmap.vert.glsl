#version 330

uniform mat4 LWVP;

in vec4 pos;

void main()
{
    vec4 spos = vec4(pos.xyz, 1.0);
    gl_Position = LWVP * spos;
}

