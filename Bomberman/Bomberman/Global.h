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
constexpr unsigned char MAP_HEIGHT = 15;
constexpr unsigned char MAP_WIDTH = 27;

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
	BoxDestructible,
	Wall,
	Way,
	Way3D,
};

enum Direction {
	Down,
	Up,
	Right,
	Left, 
	Middle,
	Death
};

enum TypeItem {
	BombPlus,
	ExplosionPlus,
	SpeedPlus
};

enum TypeEnemy {
	Ia,
	Heli,
};

enum Select {
	Other,
	Level,
	History,
	Play,
	Exit,
	Option,
	GameOver,
	Win
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


struct Mapping {
	std::vector<sf::VertexArray> quads;
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> output;
};