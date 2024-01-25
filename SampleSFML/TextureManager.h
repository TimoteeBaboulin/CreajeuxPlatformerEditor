#pragma once

#include <map>
#include <string>

#include "SFML/Graphics.hpp"

class TextureManager
{
	static std::map<std::string, sf::Texture> m_textureAtlas;


public:
	static sf::Texture GetTexture(std::string);

	static void LoadTextures();
	static void LoadTextures(std::string);

	static std::map<std::string, sf::Texture> GetTextureAtlas();
};

