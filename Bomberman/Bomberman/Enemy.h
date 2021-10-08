#pragma once
#include "Global.h"
#include <SFML/Graphics.hpp>
#include "Bomb.h";
class Enemy
{
public:
	Enemy();

	Direction getDirection();
	void setDirection(Direction dir);

	Position getPosition();
	void setPosition(short i_x, short i_y);

	sf::IntRect getRectSourceSpriteDown();
	void setRectSourceSpriteDown(sf::IntRect rectSourceSpriteDown);

	sf::IntRect getRectSourceSpriteLeft();
	void setRectSourceSpriteLeft(sf::IntRect rectSourceSpriteLeft);

	sf::IntRect getRectSourceSpriteRight();
	void setRectSourceSpriteRight(sf::IntRect rectSourceSpriteRight);

	sf::IntRect getRectSourceSpriteUp();
	void setRectSourceSpriteUp(sf::IntRect rectSourceSpriteUp);

	sf::Sprite getSprite();
	void setSprite(sf::Sprite sprite);

	sf::Sprite animation(sf::Clock& clock, sf::Sprite& sprite, Direction dir);

	void createCoordonates(sf::RectangleShape& rect);

	bool collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir);
	
	void randomMovement(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, sf::Sprite& sprite, sf::Clock& clock);
	void enemyDirection(int& randomVar, sf::Sprite& sprite, std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, sf::Clock& clock);



private:
	Direction m_direction;
	int m_nbreBomb;
	int m_life;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	Position m_position;
	sf::IntRect m_rectSourceSpriteDown;
	sf::IntRect m_rectSourceSpriteLeft;
	sf::IntRect m_rectSourceSpriteRight;
	sf::IntRect m_rectSourceSpriteUp;
	int point1Collision[2];
	int point2Collision[2];
	int point3Collision[2];
	int point4Collision[2];
	bool collisionOk[4];
	std::vector<int> DirPossible;
	bool calculRandomDir;
	int positionBeforeMove[2];
	int randomVar;
	int lastPosition;

};

