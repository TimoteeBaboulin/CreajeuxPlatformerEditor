#ifndef TILE_H
#define TILE_H

#include "common.h"

struct Tile
{
	sf::Sprite sprite;
	sf::Vector2f pos;
	float height;
	float width;
	void Save();
};

#endif // !TILE_H


