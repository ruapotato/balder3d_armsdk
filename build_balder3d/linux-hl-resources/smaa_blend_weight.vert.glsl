#version 330

uniform vec2 screenSize;
uniform vec2 screenSizeInv;

out vec2 texCoord;
in vec2 pos;
out vec2 pixcoord;
out vec4 offset0;
out vec4 offset1;
out vec4 offset2;

void main()
{
    texCoord = (pos * vec2(0.5)) + vec2(0.5);
    pixcoord = texCoord * screenSize;
    offset0 = (screenSizeInv.xyxy * vec4(-0.25, -0.125, 1.25, -0.125)) + texCoord.xyxy;
    offset1 = (screenSizeInv.xyxy * vec4(-0.125, -0.25, -0.125, 1.25)) + texCoord.xyxy;
    offset2 = (screenSizeInv.xxyy * vec4(-32.0, 32.0, -32.0, 32.0)) + vec4(offset0.xz, offset1.yw);
    gl_Position = vec4(pos, 0.0, 1.0);
}

