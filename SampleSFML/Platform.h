#ifndef PLATFORM_H
#define PLATFORM_H

#include "common.h"

struct Spike;

struct Platform
{
	float speed;
	float height;
	float width;
	float friction;
	float density;
	float distance;
	sf::Vector2f pos;
	Spike** spikes = nullptr;
	Direction direction = NONE;
	Shape shape = SQUARE;
	sf::Sprite sprite;
	void Save();
};

#endif // !PLATFORM_H

