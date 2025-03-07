#version 330

uniform vec2 screenSizeInv;

out vec2 texCoord;
in vec2 pos;
out vec4 offset0;
out vec4 offset1;
out vec4 offset2;

void main()
{
    texCoord = (pos * vec2(0.5)) + vec2(0.5);
    offset0 = (screenSizeInv.xyxy * vec4(-1.0, 0.0, 0.0, -1.0)) + texCoord.xyxy;
    offset1 = (screenSizeInv.xyxy * vec4(1.0, 0.0, 0.0, 1.0)) + texCoord.xyxy;
    offset2 = (screenSizeInv.xyxy * vec4(-2.0, 0.0, 0.0, -2.0)) + texCoord.xyxy;
    gl_Position = vec4(pos, 0.0, 1.0);
}

