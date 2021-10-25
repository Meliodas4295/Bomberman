#pragma once
#include "Global.h"
#include <SFML/Graphics.hpp>
#include "Bomb.h";
#include "BombermanPlayer.h";
class Enemy
{
public:
	Enemy();
	Enemy(TypeEnemy type,  Direction direction, sf::Vector2f spritePos, string CheminSprite, sf::IntRect rectSourceSpriteDown, sf::IntRect rectSourceSpriteLeft, sf::IntRect rectSourceSpriteRight, sf::IntRect rectSourceSpriteUp);

	sf::Clock& getClock();
	void setClock(sf::Clock& m_clock);

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

	sf::Vector2f getMspritePos() const;
	void setMspritePos(sf::Vector2f mspritePos);

	string getMcheminSprite() const;
	void setMcheminSprite(string mcheminSprite);

	bool animation(Direction dir);

	bool IsDead(Direction dir);

	void createCoordonates();

	bool collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir);

	bool collisionBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir, vector<Bomb*> m_bombes);

	bool collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir);
	
	void randomMovement(std::array<std::string, MAP_HEIGHT>& map_sketch, vector<Bomb*> m_bombes);
	void enemyDirection(int& randomVar, std::array<std::string, MAP_HEIGHT>& map_sketch);

	void classicMovmentUpDown(std::array<std::string, MAP_HEIGHT>& map_sketch, vector<Bomb*> m_bombes);

	void classicMovmentRightLeft(std::array<std::string, MAP_HEIGHT>& map_sketch, vector<Bomb*> m_bombes);

	bool getDamage(sf::RectangleShape b);

	void draw(sf::RenderWindow& window);

	void updatePositionHitBox();

	void updatePositionSprite();



private:
	Direction m_direction;
	int m_nbreBomb;
	int m_life;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	Position m_position;
	sf::Vector2f m_spritePos;
	string m_cheminSprite;
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
	sf::Clock clock;
	sf::RectangleShape m_hitBox;
	TypeEnemy m_type;
	PathFinding m_pathFinding;

};

