#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(TypeEnemy type, Direction direction, sf::Vector2f spritePos, string CheminSprite, sf::IntRect rectSourceSpriteDown, sf::IntRect rectSourceSpriteLeft, sf::IntRect rectSourceSpriteRight, sf::IntRect rectSourceSpriteUp): m_direction(Down)
{
	m_rectSourceSpriteDown = rectSourceSpriteDown;
	m_rectSourceSpriteLeft = rectSourceSpriteLeft;
	m_rectSourceSpriteRight = rectSourceSpriteRight;
	m_rectSourceSpriteUp = rectSourceSpriteUp;
	m_cheminSprite = CheminSprite;
	m_spritePos = spritePos;
	m_direction = direction;
	m_type = type;

	m_hitBox.setSize(sf::Vector2f(12, 8));
	m_hitBox.setFillColor(sf::Color::Black);


	for (int i = 0; i < 4; i++) {
		collisionOk[i] = true;
	}
	calculRandomDir = true;
	lastPosition == Down;
	m_texture.loadFromFile(m_cheminSprite);
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(m_rectSourceSpriteDown);
	m_sprite.setPosition(m_spritePos);
}

sf::Clock& Enemy::getClock()
{
	return clock;
}

void Enemy::setClock(sf::Clock& m_clock)
{
	clock = m_clock;
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

sf::Sprite& Enemy::getSprite()
{
	return m_sprite;
}

void Enemy::setSprite(sf::Sprite sprite)
{
	m_sprite = sprite;
}

bool Enemy::animation(Direction dir)
{
	if (dir == Down) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {
			if (m_rectSourceSpriteDown.left == 2*CELL_SIZE)
				m_rectSourceSpriteDown.left = 0;
			else
				m_rectSourceSpriteDown.left += CELL_SIZE;

			m_sprite.setTextureRect(m_rectSourceSpriteDown);
			clock.restart();
		}
	}
	if (dir == Left) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {
			if (m_rectSourceSpriteLeft.left == 2 * CELL_SIZE)
				m_rectSourceSpriteLeft.left = 0;
			else
				m_rectSourceSpriteLeft.left += CELL_SIZE;

			m_sprite.setTextureRect(m_rectSourceSpriteLeft);
			clock.restart();
		}
	}
	if (dir == Right) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {
			if (m_rectSourceSpriteRight.left == 2 * CELL_SIZE)
				m_rectSourceSpriteRight.left = 0;
			else
				m_rectSourceSpriteRight.left += CELL_SIZE;

			m_sprite.setTextureRect(m_rectSourceSpriteRight);
			clock.restart();
		}
	}
	if (dir == Up) {
		if (clock.getElapsedTime().asSeconds() > 0.2f) {
			if (m_rectSourceSpriteUp.left == 2 * CELL_SIZE)
				m_rectSourceSpriteUp.left = 0;
			else
				m_rectSourceSpriteUp.left += CELL_SIZE;

			m_sprite.setTextureRect(m_rectSourceSpriteUp);
			clock.restart();
		}
	}
	if (dir == Death) {
		int currenttimeint = clock.getElapsedTime().asSeconds();
		if (m_type == Ia) {
			int animation1framenumber = static_cast<unsigned int>(clock.getElapsedTime().asSeconds() * 3.f) % 4;
			m_sprite.setTextureRect(sf::IntRect(animation1framenumber * 16, 24*4, CELL_SIZE, 24));
			if (animation1framenumber == 3) {
				return true;
			}
			return false;

		}
		if (m_type == Heli) {
			int animation1framenumber = static_cast<unsigned int>(clock.getElapsedTime().asSeconds() * 6.f) % 2;
			m_sprite.setTextureRect(sf::IntRect(animation1framenumber * 16 + 16 * 3, 0, CELL_SIZE, 24));
			if (currenttimeint == 2) {
				return true;
			}
			return false;
		}
		return false;
	}
}

void Enemy::createCoordonates()
{
	point1Collision[0] = floor(m_hitBox.getPosition().x / CELL_SIZE);
	point1Collision[1] = floor(m_hitBox.getPosition().y / CELL_SIZE);
	point2Collision[0] = floor((m_hitBox.getPosition().x + 12) / CELL_SIZE);
	point2Collision[1] = floor((m_hitBox.getPosition().y + 8) / CELL_SIZE);
	point3Collision[0] = floor((m_hitBox.getPosition().x - 4) / CELL_SIZE);
	point3Collision[1] = floor((m_hitBox.getPosition().y + 14) / CELL_SIZE);
	point4Collision[0] = floor((m_hitBox.getPosition().x + 14) / CELL_SIZE);
	point4Collision[1] = floor((m_hitBox.getPosition().y - 4) / CELL_SIZE);
}

bool Enemy::collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir)
{
	this->createCoordonates();

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

bool Enemy::collisionBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir, vector<Bomb*> m_bombes)
{
	this->createCoordonates();
	if (dir == Down) {
		return !(map_sketch[point3Collision[1]][point1Collision[0]] == 'o') && !(map_sketch[point3Collision[1]][point2Collision[0]] == 'o');
	}
	else if (dir == Left) {
		return !(map_sketch[point1Collision[1]][point3Collision[0]] == 'o') && !(map_sketch[point2Collision[1]][point3Collision[0]] == 'o');
	}
	else if (dir == Right) {
		return !(map_sketch[point1Collision[1]][point4Collision[0]] == 'o') && !(map_sketch[point2Collision[1]][point4Collision[0]] == 'o');
	}
	else if (dir == Up) {
		return !(map_sketch[point4Collision[1]][point1Collision[0]] == 'o') && !(map_sketch[point4Collision[1]][point2Collision[0]] == 'o');
	}
	else {
		return true;
	}
}
bool Enemy::collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir)
{
	this->createCoordonates();

	if (dir == Down) {
		return !(map_sketch[point3Collision[1]][point1Collision[0]] == '=') && !(map_sketch[point3Collision[1]][point2Collision[0]] == '=');
	}
	else if (dir == Left) {
		return !(map_sketch[point1Collision[1]][point3Collision[0]] == '=') && !(map_sketch[point2Collision[1]][point3Collision[0]] == '=');
	}
	else if (dir == Right) {
		return !(map_sketch[point1Collision[1]][point4Collision[0]] == '=') && !(map_sketch[point2Collision[1]][point4Collision[0]] == '=');
	}
	else if (dir == Up) {
		return !(map_sketch[point4Collision[1]][point1Collision[0]] == '=') && !(map_sketch[point4Collision[1]][point2Collision[0]] == '=');
	}
	else {
		return true;
	}
}



void Enemy::randomMovement(std::array<std::string, MAP_HEIGHT>& map_sketch, vector<Bomb*> m_bombes)
{
	if (this->collisionRock(map_sketch, Down) && this->collisionBox(map_sketch, Down) && this->collisionBomb(map_sketch, Down, m_bombes) && collisionOk[0] && lastPosition != Down) {
		DirPossible.push_back(Down);
		collisionOk[0] = false;
	}
	if (this->collisionRock(map_sketch, Left) && this->collisionBox(map_sketch, Left) && this->collisionBomb(map_sketch, Left, m_bombes) && collisionOk[1] && lastPosition != Left) {
		DirPossible.push_back(Left);
		collisionOk[1] = false;
	}
	if (this->collisionRock(map_sketch, Right) && this->collisionBox(map_sketch, Right) && this->collisionBomb(map_sketch, Right, m_bombes) && collisionOk[2] && lastPosition != Right) {
		DirPossible.push_back(Right);
		collisionOk[2] = false;
	}
	if (this->collisionRock(map_sketch, Up) && this->collisionBox(map_sketch, Up) && this->collisionBomb(map_sketch, Up, m_bombes) && collisionOk[3] && lastPosition != Up) {
		DirPossible.push_back(Up);
		collisionOk[3] = false;
	}
	if (DirPossible.size() == 0) {
		DirPossible.push_back(lastPosition);
	}
	if (calculRandomDir && DirPossible.size() != 0) {
		positionBeforeMove[0] = m_sprite.getPosition().x;
		positionBeforeMove[1] = m_sprite.getPosition().y;
		randomVar = rand() % DirPossible.size();
		calculRandomDir = false;
	}
	switch (DirPossible.size()) {
	case 0:
		this->enemyDirection(lastPosition, map_sketch);
		break;
	case 1:
		this->enemyDirection(randomVar, map_sketch);
		break;
	case 2:
		this->enemyDirection(randomVar, map_sketch);
		break;
	case 3:
		this->enemyDirection(randomVar, map_sketch);
		break;
	case 4:
		this->enemyDirection(randomVar, map_sketch);
		break;
	default:
		break;

	}
}

void Enemy::enemyDirection(int& randomVar, std::array<std::string, MAP_HEIGHT>& map_sketch) {
	if (DirPossible[randomVar] == Down && this->collisionRock(map_sketch, Down)) {
		this->animation(Down);
		m_sprite.move(0, 1);
		if (m_sprite.getPosition().y == positionBeforeMove[1] + 16) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Up;
		}
	}
	else if (DirPossible[randomVar] == Left && this->collisionRock(map_sketch, Left)) {
		this->animation(Left);
		m_sprite.move(-1, 0);
		if (m_sprite.getPosition().x == positionBeforeMove[0] - 16) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Right;
		}
	}
	else if (DirPossible[randomVar] == Right && this->collisionRock(map_sketch, Right)) {
		this->animation(Right);
		m_sprite.move(1, 0);
		if (m_sprite.getPosition().x == positionBeforeMove[0] + 16) {
			for (int i = 0; i < 4; i++) {
				collisionOk[i] = true;
			}
			calculRandomDir = true;
			lastPosition = Left;
		}
	}
	else if (DirPossible[randomVar] == Up && this->collisionRock(map_sketch, Up)) {
		this->animation(Up);
		m_sprite.move(0, -1);
		if (m_sprite.getPosition().y == positionBeforeMove[1] - 16) {
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

void Enemy::classicMovmentUpDown(std::array<std::string, MAP_HEIGHT>& map_sketch, vector<Bomb*> m_bombes)
{
	if (m_direction == Up) {
		if (this->collisionBox(map_sketch, Up) && this->collisionRock(map_sketch, Up) && this->collisionBomb(map_sketch, Up, m_bombes)) {
			this->animation(Up);
			m_sprite.move(0, -1);
		}
		else {
			m_direction = Down;
		}
	}
	if (m_direction == Down) {
		if (this->collisionBox(map_sketch, Down) && this->collisionRock(map_sketch, Down) && this->collisionBomb(map_sketch, Down, m_bombes)) {
			this->animation(Down);
			m_sprite.move(0, 1);
		}
		else {
			m_direction = Up;
		}
	}

}

void Enemy::classicMovmentRightLeft(std::array<std::string, MAP_HEIGHT>& map_sketch, vector<Bomb*> m_bombes)
{
	if (m_direction == Left) {
		if (this->collisionBox(map_sketch, Left) && this->collisionRock(map_sketch, Left) && this->collisionBomb(map_sketch, Left, m_bombes)) {
			this->animation(Left);
			m_sprite.move(-1, 0);
		}
		else {
			m_direction = Right;
		}
	}
	if (m_direction == Right) {
		if (this->collisionBox(map_sketch, Right) && this->collisionRock(map_sketch, Right) && this->collisionBomb(map_sketch, Right, m_bombes)) {
			this->animation(Right);
			m_sprite.move(1, 0);
		}
		else {
			m_direction = Left;
		}
	}
}

bool Enemy::getDamage(sf::RectangleShape b)
{
	if (b.getGlobalBounds().intersects(this->m_sprite.getGlobalBounds())) {
		return true;
	}
	return false;
}

bool Enemy::IsDead(Direction dir)
{
	if (this->animation(dir)) {
		m_sprite.setPosition(-64, -64);
		return true;
	}
	else {
		return false;
	}
}

void Enemy::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
}

void Enemy::updatePositionHitBox()
{
	m_hitBox.setPosition(sf::Vector2f(m_sprite.getPosition().x + 3, m_sprite.getPosition().y + 20));
}

void Enemy::updatePositionSprite()
{
	m_sprite.setPosition(m_spritePos);
}

sf::Vector2f Enemy::getMspritePos() const
{
    return m_spritePos;
}

void Enemy::setMspritePos(sf::Vector2f mspritePos)
{
    m_spritePos = mspritePos;
}

string Enemy::getMcheminSprite() const
{
    return m_cheminSprite;
}

void Enemy::setMcheminSprite(string mcheminSprite)
{
    m_cheminSprite = mcheminSprite;
}

