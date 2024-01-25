#include "TextureManager.h"
#include <iostream>
#include <filesystem>

std::map<std::string, sf::Texture> TextureManager::m_textureAtlas;

sf::Texture TextureManager::GetTexture(std::string _name)
{
	auto result = m_textureAtlas.find(_name);
	if (result != m_textureAtlas.end())
	{
		return (*result).second;
	}

	return sf::Texture();
}

void TextureManager::LoadTextures()
{
	m_textureAtlas.clear();

	sf::Image image;
	sf::Texture text;

	image.loadFromFile("ignoble.png");
	text.loadFromImage(image);
	m_textureAtlas["ignoble"] = text;
}

void TextureManager::LoadTextures(std::string _path)
{
	m_textureAtlas.clear();

	sf::Image image;
	sf::Texture text;
	for (auto& file : std::filesystem::directory_iterator(_path))
	{
		if (file.is_directory())
		{
			LoadTextures(file.path().generic_string());
		}
		else
		{
			if (file.path().extension().generic_string() == ".png" || file.path().extension().generic_string() == ".bmp")
			{
				image.loadFromFile(file.path().generic_string());
				text.loadFromImage(image);
				m_textureAtlas[file.path().filename().generic_string()] = text;
			}
		}
	}
}

std::map<std::string, sf::Texture> TextureManager::GetTextureAtlas()
{
	return m_textureAtlas;
}
