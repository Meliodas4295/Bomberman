#pragma once
#include <iostream>
#include <array>
#include "Global.h"
#include "BombermanPlayer.h"
#include <SFML/Graphics.hpp>


using namespace std;

class Map
{
public:
	Map();
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convertSketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, BombermanPlayer& bomberman);
	void drawMap(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, BombermanPlayer& bombermanPlayer, sf::RenderWindow& i_window);



private:
};

