#ifndef SPIKE_H
#define SPIKE_H

#include "common.h"

struct Spike
{
	float height;
	float width;
	int numbers;
	sf::Vector2f pos;
	sf::Sprite sprite;
	void Save();
};

#endif // !SPIKE_H

