#ifndef COMMON_H
#define COMMON_H

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

#include <iostream>
#include <vector>
#include <fstream>

enum Direction
{
	NONE,
	UP,
	LEFT,
	RIGHT,
	DOWN
};

enum Shape
{
	SQUARE,
	CIRCLE,
	PENTUE,
	OCTOGONAL
};

struct Tile
{
	sf::Sprite sprite;
	sf::Vector2f pos;
	float height;
	float width;
	void Save(){}
};

struct Player
{
	float speed;
	float density;
	float height;
	float width;
	float friction;
	sf::Vector2f pos;
	sf::Sprite sprite;
	void Save() {}
};

struct Spike
{
	float height;
	float width;
	int numbers;
	sf::Vector2f pos;
	sf::Sprite sprite;
	void Save() {}
};

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
	void Save() {}
};

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
	void Save() {}
};

#endif
