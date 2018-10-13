#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
layout (location = 2) in vec2 aTexCoord;

out vec4 vertexColor;
out vec4 anotherColor;
out vec2 TexCoord;

uniform vec3 offset;
uniform mat4 transform;

void main()
{
    gl_Position = transform * vec4(aPos, 1.0) + vec4(offset,1);
	vertexColor = vec4(0.5, 0.0, 0.0, 1.0);// ����ɫ
	anotherColor = vec4(aColor, 1.0);
	TexCoord = aTexCoord;
}