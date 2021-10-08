#include "BombermanPlayer.h"
#include <iostream>
#include "Bomb.h"


BombermanPlayer::BombermanPlayer() : m_position({ 0, 0 }), m_life(0), m_nbreBomb(0), m_direction(Down), m_texture(m_texture), m_rectSourceSpriteDown(3 * 17, 34, CELL_SIZE, CELL_SIZE * 2),
m_rectSourceSpriteLeft(6 * 17 + 4, 34, CELL_SIZE, CELL_SIZE * 2), m_rectSourceSpriteRight(9 * 17 + 8, 34, CELL_SIZE, CELL_SIZE * 2), m_rectSourceSpriteUp(12 * 17 + 14, 34, CELL_SIZE, CELL_SIZE * 2)
{
}

Direction BombermanPlayer::getDirection()
{
    return m_direction;
}

void BombermanPlayer::setDirection(Direction dir)
{
    m_direction = dir;
}

Position BombermanPlayer::getPosition()
{
    return m_position;
}

void BombermanPlayer::setPosition(short i_x, short i_y)
{
    m_position = { i_x, i_y };
}

sf::IntRect BombermanPlayer::getRectSourceSpriteDown()
{
    return m_rectSourceSpriteDown;
}

void BombermanPlayer::setRectSourceSpriteDown(sf::IntRect rectSourceSpriteDown)
{
    m_rectSourceSpriteDown = rectSourceSpriteDown;
}

sf::IntRect BombermanPlayer::getRectSourceSpriteLeft()
{
    return m_rectSourceSpriteLeft;
}

void BombermanPlayer::setRectSourceSpriteLeft(sf::IntRect rectSourceSpriteLeft)
{
    m_rectSourceSpriteLeft = rectSourceSpriteLeft;
}

sf::IntRect BombermanPlayer::getRectSourceSpriteRight()
{
    return m_rectSourceSpriteRight;
}

void BombermanPlayer::setRectSourceSpriteRight(sf::IntRect rectSourceSpriteRight)
{
    m_rectSourceSpriteRight = rectSourceSpriteRight;
}

sf::IntRect BombermanPlayer::getRectSourceSpriteUp()
{
    return m_rectSourceSpriteUp;
}

void BombermanPlayer::setRectSourceSpriteUp(sf::IntRect rectSourceSpriteUp)
{
    m_rectSourceSpriteUp = rectSourceSpriteUp;
}

sf::Sprite BombermanPlayer::getSprite()
{
    return m_sprite;
}

void BombermanPlayer::setSprite(sf::Sprite sprite)
{
    m_sprite = sprite;
}

sf::Sprite BombermanPlayer::animation(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite, Direction dir)
{
    if (dir == Down) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {
            if (rect.left == 5 * 17)
                rect.left = 3 * 17;
            else
                rect.left += 17;

            sprite.setTextureRect(rect);
            clock.restart();
        }
        return sprite;
    }
    else if (dir == Left) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (rect.left == 8 * 17 + 4)
                rect.left = 6 * 17 + 4;
            else
                rect.left += 17;

            sprite.setTextureRect(rect);
            clock.restart();
        }
        return sprite;
    }
    else if (dir == Right) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (rect.left == 11 * 17 + 8)
                rect.left = 9 * 17 + 8;
            else
                rect.left += 17;

            sprite.setTextureRect(rect);
            clock.restart();
        }
        return sprite;
    }
    else if (dir == Up) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (rect.left == 14 * 17 + 14)
                rect.left = 12 * 17 + 14;
            else
                rect.left += 17;

            sprite.setTextureRect(rect);
            clock.restart();
        }
        return sprite;
    }
    else {
        return sprite;
    }
}

void BombermanPlayer::createCoordonates(sf::RectangleShape& rect)
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

bool BombermanPlayer::collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir)
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
bool BombermanPlayer::collisionBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir)
{
    this->createCoordonates(rect);

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
bool BombermanPlayer::collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect, Direction dir)
{
    this->createCoordonates(rect);

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
void BombermanPlayer::update()
{
}


