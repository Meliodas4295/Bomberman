#pragma once
#include "Global.h"
#include <SFML/Graphics.hpp>
#include "Bomb.h";



class BombermanPlayer
{
public:
	BombermanPlayer();

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


	sf::Sprite animation(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite, Direction dir);

	void createCoordonates(sf::RectangleShape& rect);

	bool collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir);

	bool collisionBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir);

	bool collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir);

	void update();


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

};

