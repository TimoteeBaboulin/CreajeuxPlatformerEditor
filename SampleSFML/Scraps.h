#ifndef SCRAPS_H
#define SCRAPS_H

#include "common.h"

struct Spike;

struct Scraps
{
	float speed;
	float height;
	float width;
	float friction;
	float density;
	float elasticity;
	sf::Vector2f pos;
	Spike** spikes = nullptr;
	Shape shape = SQUARE;
	sf::Sprite sprite;
	void Save();
};

#endif // !SCRAPS_H
