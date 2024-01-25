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

float GetFloatFromFStream(std::ifstream& _stream)
{
	std::string outputStr;
	float output;

	if (!_stream.is_open() || _stream.eof())
	{
		throw new std::exception("File doesn't exist or is already at the end");
	}
	
	_stream >> outputStr;
	output = std::stof(outputStr);
	return output;
}

#endif
