#pragma once
#include <array>
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

using namespace std;

//I won't explain this.
constexpr unsigned char CELL_SIZE = 16;
//This too.
constexpr unsigned char FONT_HEIGHT = 16;

constexpr unsigned char ROW = 16;
constexpr unsigned char COL = 13;
constexpr unsigned char MAP_HEIGHT = 13;
constexpr unsigned char MAP_WIDTH = 15;
constexpr unsigned char BOMBERMAN_ANIMATION_FRAMES = 6;
constexpr unsigned char BOMBERMAN_ANIMATION_SPEED = 4;
constexpr unsigned char BOMBERMAN_DEATH_FRAMES = 12;
constexpr unsigned char BOMBERMAN_SPEED = 2;
constexpr unsigned char SCREEN_RESIZE = 2;

//This is in frames. So don't be surprised if the numbers are too big.
constexpr unsigned short BOMB_DURATION = 1024;
constexpr unsigned short FRAME_DURATION = 16667;

typedef pair<int, int> Pair;

// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, pair<int, int> > pPair;

// A structure to hold the necessary parameters
struct cell {
	// Row and Column index of its parent
	// Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
	int parent_i, parent_j;
	// f = g + h
	double f, g, h;
};


//I used enums! I rarely use them, so enjoy this historical moment.
enum Cell
{
	Empty,
	Rock,
	Box,
	Wall,
	Way,
	Way3D,
};

enum Direction {
	Up,
	Down,
	Right,
	Left
};

struct Position
{
	short x;
	short y;

	//See? I'm an expert.
	bool operator==(const Position& i_position)
	{
		return this->x == i_position.x && this->y == i_position.y;
	}
};

struct Frame {
	sf::IntRect rect;
	double duration; // in seconds
};

struct Mapping {
	std::vector<sf::VertexArray> quads;
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> output;
};