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

#endif
