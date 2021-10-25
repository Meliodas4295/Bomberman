#pragma once
#include <iostream>
#include <array>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "Global.h"
#include "BombermanPlayer.h"
#include <SFML/Graphics.hpp>


using namespace std;

class Map
{
public:
	Map();
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> convertSketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch);
	void drawMap(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, sf::RenderWindow& i_window);
	/*void draw(sf::RenderWindow& window);*/
	vector<string> explode(string const& s, char delim);


private:
	vector<sf::Sprite> m_map;
	sf::Texture m_texture;
};

