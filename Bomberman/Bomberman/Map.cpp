#include "Map.h"
#include "BombermanPlayer.h"
#include "Global.h"

Map::Map()
{
}

std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> Map::convertSketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, BombermanPlayer& bombermanPlayer)
{
	//Is it okay if I put {} here? I feel like I'm doing something illegal.
	//But if I don't put it there, Visual Studio keeps saying "lOcAl vArIaBlE Is nOt iNiTiAlIzEd".
	std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH> output_map{};

	for (unsigned char a = 0; a < MAP_HEIGHT; a++)
	{
		for (unsigned char b = 0; b < MAP_WIDTH; b++)
		{
			//By default, every cell is empty.
			output_map[b][a] = Cell::Empty;

			switch (i_map_sketch[a][b])
			{
				//#wall #obstacle #youcantgothroughme
			case '.':
			{
				output_map[b][a] = Cell::Way;

				break;
			}
			case '#':
			{
				output_map[b][a] = Cell::Rock;

				break;
			}
			case '=':
			{
				output_map[b][a] = Cell::Box;

				break;
			}
			case '-':
			{
				output_map[b][a] = Cell::Way3D;

				break;
			}
			
			case 'B':
			{
				bombermanPlayer.setPosition(CELL_SIZE * b, CELL_SIZE * a);

				break;
			}
			/*case 'o':
			{
				output_map[b][a] = Cell::Bomb;

				break;
			}*/
			}
		}
	}
	return output_map;
}

void Map::drawMap(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, BombermanPlayer& bombermanPlayer, sf::RenderWindow& i_window)
{
	sf::Sprite sprite;
	std::vector<sf::VertexArray> quads;

	sf::Texture texture;
	texture.loadFromFile("14bomberman.png");

	sprite.setTexture(texture);

	for (unsigned char a = 0; a < MAP_WIDTH; a++)
	{
		for (unsigned char b = 0; b < MAP_HEIGHT; b++)
		{
			sprite.setPosition(static_cast<float>(CELL_SIZE * a), static_cast<float>(CELL_SIZE * b));

			//We just crop out what we need from the texture.
			switch (convertSketch(i_map_sketch,bombermanPlayer)[a][b])
			{
			case Cell::Way:
			{
				sprite.setTextureRect(sf::IntRect(71 + 3 * (CELL_SIZE + 1), 175, CELL_SIZE, CELL_SIZE));

				i_window.draw(sprite);

				break;
			}
			case Cell::Rock:
			{
				sprite.setTextureRect(sf::IntRect(71, 175, CELL_SIZE, CELL_SIZE));
				i_window.draw(sprite);

				break;
			}
			case Cell::Box:
			{
				sprite.setTextureRect(sf::IntRect(71 + (CELL_SIZE+1), 175, CELL_SIZE, CELL_SIZE));

				i_window.draw(sprite);

				break;
			}
			case Cell::Way3D:
			{
				sprite.setTextureRect(sf::IntRect(71 + 2 * (CELL_SIZE + 1), 175, CELL_SIZE, CELL_SIZE));

				i_window.draw(sprite);

				break;
			}
			}
		}
	}
}
