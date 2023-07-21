#pragma once

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <shader.h>


class TextureShader
{
public:
	// the program ID
	unsigned int ID;

	TextureShader()
	{
		shader = Shader("texture.vs", "texture.fs")
	};

	void use() {
		glUseProgram(ID);
	}

	void setBool(const std::string& name, bool value) const
	{
		shader.setBool(name, value);
	}

	void setInt(const std::string& name, int value) const
	{
		shader.setInt(name, value);
	}

	void setFloat(const std::string& name, float value) const
	{
		shader.setFloat(name, value);
	}

private:
	Shader shader;

};