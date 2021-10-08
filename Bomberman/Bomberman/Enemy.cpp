#include "Enemy.h"

Enemy::Enemy(): m_direction(Down)
{
	for (int i = 0; i < 4; i++) {
		collisionOk[i] = true;
	}
	calculRandomDir = true;
	m_rectSourceSpriteDown = sf::IntRect(3 * 17, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
	m_rectSourceSpriteLeft = sf::IntRect(6 * 17 + 4, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
	m_rectSourceSpriteRight = sf::IntRect(9 * 17 + 8, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
	m_rectSourceSpriteUp = sf::IntRect(12 * 17 + 14, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
	lastPosition == Down;
}

Direction Enemy::getDirection()
{
	return m_direction;
}

void Enemy::setDirection(Direction dir)
{
	m_direction = dir;
}

Position Enemy::getPosition()
{
	return Position();
}

void Enemy::setPosition(short i_x, short i_y)
{
}

sf::IntRect Enemy::getRectSourceSpriteDown()
{
	return sf::IntRect();
}

void Enemy::setRectSourceSpriteDown(sf::IntRect rectSourceSpriteDown)
{
}

sf::IntRect Enemy::getRectSourceSpriteLeft()
{
	return sf::IntRect();
}

void Enemy::setRectSourceSpriteLeft(sf::IntRect rectSourceSpriteLeft)
{
}

sf::IntRect Enemy::getRectSourceSpriteRight()
{
	return sf::IntRect();
}

void Enemy::setRectSourceSpriteRight(sf::IntRect rectSourceSpriteRight)
{
}

sf::IntRect Enemy::getRectSourceSpriteUp()
{
	return sf::IntRect();
}

void Enemy::setRectSourceSpriteUp(sf::IntRect rectSourceSpriteUp)
{
}

sf::Sprite Enemy::getSprite()
{
	return sf::Sprite();
}

void Enemy::setSprite(sf::Sprite sprite)
{
}

sf::Sprite Enemy::animation(sf::Clock& clock, sf::Sprite& sprite, Direction dir)
{
	if (dir == Down) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {
			if (m_rectSourceSpriteDown.left == 5 * 17)
				m_rectSourceSpriteDown.left = 3 * 17;
			else
				m_rectSourceSpriteDown.left += 17;

			sprite.setTextureRect(m_rectSourceSpriteDown);
			clock.restart();
		}
		return sprite;
	}
	else if (dir == Left) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {

			if (m_rectSourceSpriteLeft.left == 8 * 17 + 4)
				m_rectSourceSpriteLeft.left = 6 * 17 + 4;
			else
				m_rectSourceSpriteLeft.left += 17;

			sprite.setTextureRect(m_rectSourceSpriteLeft);
			clock.restart();
		}
		return sprite;
	}
	else if (dir == Right) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {

			if (m_rectSourceSpriteRight.left == 11 * 17 + 8)
				m_rectSourceSpriteRight.left = 9 * 17 + 8;
			else
				m_rectSourceSpriteRight.left += 17;

			sprite.setTextureRect(m_rectSourceSpriteRight);
			clock.restart();
		}
		return sprite;
	}
	else if (dir == Up) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {

			if (m_rectSourceSpriteUp.left == 14 * 17 + 14)
				m_rectSourceSpriteUp.left = 12 * 17 + 14;
			else
				m_rectSourceSpriteUp.left += 17;

			sprite.setTextureRect(m_rectSourceSpriteUp);
			clock.restart();
		}
		return sprite;
	}
	else {
		return sprite;
	}
}

void Enemy::createCoordonates(sf::RectangleShape& rect)
{
	point1Collision[0] = floor(rect.getPosition().x / CELL_SIZE);
	point1Collision[1] = floor(rect.getPosition().y / CELL_SIZE);
	point2Collision[0] = floor((rect.getPosition().x + 12) / CELL_SIZE);
	point2Collision[1] = floor((rect.getPosition().y + 8) / CELL_SIZE);
	point3Collision[0] = floor((rect.getPosition().x - 4) / CELL_SIZE);
	point3Collision[1] = floor((rect.getPosition().y + 12) / CELL_SIZE);
	point4Collision[0] = floor((rect.getPosition().x + 13) / CELL_SIZE);
	point4Collision[1] = floor((rect.getPosition().y - 4) / CELL_SIZE);
}

bool Enemy::collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir)
{
	this->createCoordonates(rect);

	if (dir == Down) {
		return !(map_sketch[point3Collision[1]][point1Collision[0]] == '#') && !(map_sketch[point3Collision[1]][point2Collision[0]] == '#');
	}
	else if (dir == Left) {
		return !(map_sketch[point1Collision[1]][point3Collision[0]] == '#') && !(map_sketch[point2Collision[1]][point3Collision[0]] == '#');
	}
	else if (dir == Right) {
		return !(map_sketch[point1Collision[1]][point4Collision[0]] == '#') && !(map_sketch[point2Collision[1]][point4Collision[0]] == '#');
	}
	else if (dir == Up) {
		return !(map_sketch[point4Collision[1]][point1Collision[0]] == '#') && !(map_sketch[point4Collision[1]][point2Collision[0]] == '#');
	}
	else {
		return true;
	}
}



void Enemy::randomMovement(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, sf::Sprite& sprite, sf::Clock& clock)
{
	if (this->collisionRock(map_sketch, rect, Down) && collisionOk[0] && lastPosition != Down) {
		DirPossible.push_back(Down);
		collisionOk[0] = false;
	}
	if (this->collisionRock(map_sketch, rect, Left) && collisionOk[1] && lastPosition != Left) {
		DirPossible.push_back(Left);
		collisionOk[1] = false;
	}
	if (this->collisionRock(map_sketch, rect, Right) && collisionOk[2] && lastPosition != Right) {
		DirPossible.push_back(Right);
		collisionOk[2] = false;
	}
	if (this->collisionRock(map_sketch, rect, Up) && collisionOk[3] && lastPosition != Up) {
		DirPossible.push_back(Up);
		collisionOk[3] = false;
	}
	if (calculRandomDir && DirPossible.size() != 0) {
		positionBeforeMove[0] = sprite.getPosition().x;
		positionBeforeMove[1] = sprite.getPosition().y;
		randomVar = rand() % DirPossible.size();
		calculRandomDir = false;
	}
	switch (DirPossible.size()) {
	case 1:
		this->enemyDirection(randomVar, sprite, map_sketch, rect, clock);
		break;
	case 2:
		this->enemyDirection(randomVar, sprite, map_sketch, rect, clock);
		break;
	case 3:
		this->enemyDirection(randomVar, sprite, map_sketch, rect, clock);
		break;
	case 4:
		this->enemyDirection(randomVar, sprite, map_sketch, rect, clock);
		break;

	}
}

void Enemy::enemyDirection(int& randomVar, sf::Sprite& sprite, std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, sf::Clock& clock) {
	if (DirPossible[randomVar] == Down && this->collisionRock(map_sketch, rect, Down)) {
		this->animation(clock, sprite, Down);
		sprite.move(0, 0.5);
		if (sprite.getPosition().y == positionBeforeMove[1] + 32) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Up;
		}
	}
	else if (DirPossible[randomVar] == Left && this->collisionRock(map_sketch, rect, Left)) {
		this->animation(clock, sprite, Left);
		sprite.move(-0.5, 0);
		if (sprite.getPosition().x == positionBeforeMove[0] - 32) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Right;
		}
	}
	else if (DirPossible[randomVar] == Right && this->collisionRock(map_sketch, rect, Right)) {
		this->animation(clock, sprite, Right);
		sprite.move(0.5, 0);
		if (sprite.getPosition().x == positionBeforeMove[0] + 32) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Left;
		}
	}
	else if (DirPossible[randomVar] == Up && this->collisionRock(map_sketch, rect, Up)) {
		this->animation(clock, sprite, Up);
		sprite.move(0, -0.5);
		if (sprite.getPosition().y == positionBeforeMove[1] - 32) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Down;
		}
	}
	else {
		for (int i = 0; i < 4; i++) {
			collisionOk[i] = true;
		}
		calculRandomDir = true;
	}
	if (calculRandomDir) {
		DirPossible.clear();
	}
}
