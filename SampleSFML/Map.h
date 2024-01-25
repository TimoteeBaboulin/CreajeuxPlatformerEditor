#ifndef MAP_H
#define MAP_H

#include "common.h"

class Tile;

class Map
{
public:
	Map() = default;
	~Map() = default;
	void DisplayMap(sf::RenderWindow &_window);
	void SaveMap();
private:
	std::vector<Tile> m_foreground;
	std::vector<Tile> m_background;
};

#endif // !MAP_H


