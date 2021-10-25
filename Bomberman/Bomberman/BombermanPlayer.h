#pragma once
#include "Global.h"
#include <SFML/Graphics.hpp>
#include "Bomb.h";
#include "Item.h"



class BombermanPlayer
{
public:
	BombermanPlayer();
	~BombermanPlayer();

	sf::RectangleShape getHitBox();
	void setHitBox(sf::RectangleShape hitBox);

	int getLife();
	void setLife(int life);

	sf::Clock& getClock();
	void setClock(sf::Clock& m_clock);

	vector<Bomb*> getBombes();
	void setBombes(vector<Bomb*> bombes);

	int getNbreBomb();
	void setNbreBomb(int nbreBomb);

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

	sf::Sprite& getSprite();
	void setSprite(sf::Sprite sprite);


	bool animation(Direction dir);

	void createCoordonates();

	bool collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir);

	bool collisionBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir);

	bool collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir);

	//void ReloadBomb();

	void dropBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, int n);

	bool IsDead(Direction dir);

	void move(Direction dir);

	bool pickUpItem(Item* item);

	void draw(sf::RenderWindow& window);

	void updateHitBoxPosition();


private:
	Direction m_direction;
	int m_nbreBomb;
	int m_life;
	float m_speed;
	float m_deplacement;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	Position m_position;
	sf::Clock clock;
	sf::IntRect m_rectSourceSpriteDown;
	sf::IntRect m_rectSourceSpriteLeft;
	sf::IntRect m_rectSourceSpriteRight;
	sf::IntRect m_rectSourceSpriteUp;
	sf::IntRect rectSourceSpriteDead;
	int point1Collision[2];
	int point2Collision[2];
	int point3Collision[2];
	int point4Collision[2];
	vector<Bomb*> m_bombes;
	sf::RectangleShape m_hitBox;

};

