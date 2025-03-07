#version 330

uniform mat4 projectionMatrix;

in vec3 vertexPosition;
out vec2 texCoord;
in vec2 vertexUV;
out vec4 fragmentColor;
in vec4 vertexColor;

void main()
{
    gl_Position = projectionMatrix * vec4(vertexPosition, 1.0);
    texCoord = vertexUV;
    fragmentColor = vertexColor;
}

