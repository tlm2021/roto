#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
layout (location = 2) in vec3 aTexCoord;

out vec3 ourColor; // specify a color output to the fragment shader
out vec2 TexCoord;

void main()
{
   gl_Position = vec4(aPos, 1.0); // we can give a vec3 directly to a vec4 constructor
   ourColor = aColor;  // set the output color to match the vertex position
   TexCoord = vec2(aTexCoord.x, aTexCoord.y);
}