#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"

class Player
{
public:
	float speed;
	float density;
	float height;
	float width;
	float friction;
	sf::Vector2f pos;
	sf::Sprite sprite;
	void Save();
private:
};

#endif // !PLAYER_H

