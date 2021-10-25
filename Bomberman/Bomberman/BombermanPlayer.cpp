#include "BombermanPlayer.h"
#include <iostream>
#include "Bomb.h"


BombermanPlayer::BombermanPlayer() :m_speed(2.0), m_deplacement(4), m_position({ 0, 0 }), m_life(5), m_nbreBomb(1), m_direction(Down), m_rectSourceSpriteDown(3 * 17, 34, CELL_SIZE, CELL_SIZE * 2),
m_rectSourceSpriteLeft(6 * 17 + 4, 34, CELL_SIZE, CELL_SIZE * 2), m_rectSourceSpriteRight(9 * 17 + 8, 34, CELL_SIZE, CELL_SIZE * 2), m_rectSourceSpriteUp(12 * 17 + 14, 34, CELL_SIZE, CELL_SIZE * 2), rectSourceSpriteDead(19 * 17 + 20, 34, CELL_SIZE, CELL_SIZE * 2)
{
    m_texture.loadFromFile("15bomberman.png");
    m_sprite.setTexture(m_texture);
    m_sprite.setTextureRect(m_rectSourceSpriteDown);
    m_sprite.setPosition(sf::Vector2f(16, 48));
    m_bombes.push_back(new Bomb());

    m_hitBox.setSize(sf::Vector2f(12, 8));
    m_hitBox.setFillColor(sf::Color::Black);
}

BombermanPlayer::~BombermanPlayer() {
    /*for (int i = 0; m_bombes.size(); i++) {
        delete m_bombes[i];
       
    }*/
}

sf::RectangleShape BombermanPlayer::getHitBox()
{
    return m_hitBox;
}

void BombermanPlayer::setHitBox(sf::RectangleShape hitBox)
{
    m_hitBox = hitBox;
}

int BombermanPlayer::getLife()
{
    return m_life;
}

void BombermanPlayer::setLife(int life)
{
    m_life = life;
}

sf::Clock& BombermanPlayer::getClock()
{
    return clock;
}
void BombermanPlayer::setClock(sf::Clock& m_clock)
{
    clock = m_clock;
}

vector<Bomb*> BombermanPlayer::getBombes()
{
    return m_bombes;
}

void BombermanPlayer::setBombes(vector<Bomb*> bombes)
{
    m_bombes = bombes;
}

int BombermanPlayer::getNbreBomb()
{
    return m_nbreBomb;
}

void BombermanPlayer::setNbreBomb(int nbreBomb)
{
    m_nbreBomb = nbreBomb;
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

sf::Sprite& BombermanPlayer::getSprite()
{
    return m_sprite;
}

void BombermanPlayer::setSprite(sf::Sprite sprite)
{
    m_sprite = sprite;
}

bool BombermanPlayer::animation(Direction dir)
{
    if (dir == Down) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {
            if (m_rectSourceSpriteDown.left == 5 * 17)
                m_rectSourceSpriteDown.left = 3 * 17;
            else
                m_rectSourceSpriteDown.left += 17;

            m_sprite.setTextureRect(m_rectSourceSpriteDown);
            clock.restart();
        }
    }
    if (dir == Left) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (m_rectSourceSpriteLeft.left == 8 * 17 + 4)
                m_rectSourceSpriteLeft.left = 6 * 17 + 4;
            else
                m_rectSourceSpriteLeft.left += 17;

            m_sprite.setTextureRect(m_rectSourceSpriteLeft);
            clock.restart();
        }
    }
    if (dir == Right) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (m_rectSourceSpriteRight.left == 11 * 17 + 8)
                m_rectSourceSpriteRight.left = 9 * 17 + 8;
            else
                m_rectSourceSpriteRight.left += 17;

            m_sprite.setTextureRect(m_rectSourceSpriteRight);
            clock.restart();
        }
    }
    if (dir == Up) {
        if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (m_rectSourceSpriteUp.left == 14 * 17 + 14)
                m_rectSourceSpriteUp.left = 12 * 17 + 14;
            else
                m_rectSourceSpriteUp.left += 17;

            m_sprite.setTextureRect(m_rectSourceSpriteUp);
            clock.restart();
        }
    }
    if (dir == Death) {
        int currenttimeint = clock.getElapsedTime().asSeconds();
        int animation1framenumber = static_cast<unsigned int>(clock.getElapsedTime().asSeconds() * 3.f) % 4;
        m_sprite.setTextureRect(sf::IntRect((animation1framenumber + 19) * 17 + 20, 34, CELL_SIZE, CELL_SIZE * 2));
        if (animation1framenumber == 3) {
            return true;
        }
        else {
            return false;
        }
        /*if (clock.getElapsedTime().asSeconds() > 0.2f) {

            if (rectSourceSpriteDead.left == 22 * 17 + 20) {
                return true;
                rectSourceSpriteDead.left = 19 * 17 + 20;
            }
            else
                rectSourceSpriteDead.left += 17;

            m_sprite.setTextureRect(rectSourceSpriteDead);
            clock.restart();
        }*/
    }
    return false;
}

void BombermanPlayer::createCoordonates()
{
    point1Collision[0] = floor(m_hitBox.getPosition().x / CELL_SIZE);
    point1Collision[1] = floor(m_hitBox.getPosition().y / CELL_SIZE);
    point2Collision[0] = floor((m_hitBox.getPosition().x + m_hitBox.getSize().x) / CELL_SIZE);
    point2Collision[1] = floor((m_hitBox.getPosition().y + m_hitBox.getSize().y) / CELL_SIZE);
    point3Collision[0] = floor((m_hitBox.getPosition().x - m_deplacement) / CELL_SIZE);
    point3Collision[1] = floor((m_hitBox.getPosition().y + m_hitBox.getSize().y + m_deplacement) / CELL_SIZE);
    point4Collision[0] = floor((m_hitBox.getPosition().x + m_hitBox.getSize().x
        + m_deplacement) / CELL_SIZE);
    point4Collision[1] = floor((m_hitBox.getPosition().y - m_deplacement) / CELL_SIZE);
}

bool BombermanPlayer::collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir)
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
bool BombermanPlayer::collisionBomb(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir)
{
    this->createCoordonates();
    if (map_sketch[this->m_hitBox.getPosition().y / 16][this->m_hitBox.getPosition().x / 16] != 'o') {
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
}
bool BombermanPlayer::collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Direction dir)
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
//void BombermanPlayer::ReloadBomb()
//{
//    m_bombes.clear();
//    for (int i = 0; i < m_nbreBomb; i++) {
//        m_bombes.push_back(new Bomb());
//    }
//}
void BombermanPlayer::dropBomb(std::array<std::string, MAP_HEIGHT>& map_sketch,int n)
{
    m_bombes[n]->update(m_hitBox);
    map_sketch[m_bombes[n]->getPosition().y/16][m_bombes[n]->getPosition().x/16] = 'o';

}
bool BombermanPlayer::IsDead(Direction dir)
{
    if (this->animation(dir)) {
        m_life--;
        return true;
    }
    else {
        return false;
    }
}
void BombermanPlayer::move(Direction dir)
{
    if (dir == Down) {
        m_sprite.move(0, m_speed);
    }
    if (dir == Up) {
        m_sprite.move(0, -m_speed);
    }
    if (dir == Left) {
        m_sprite.move(-m_speed, 0);
    }
    if (dir == Right) {
        m_sprite.move(m_speed, 0);
    }
}
bool BombermanPlayer::pickUpItem(Item* item)
{
    if (item->getMsprite().getGlobalBounds().intersects(m_hitBox.getGlobalBounds())) {
        if (item->getMtype() == SpeedPlus) {
            m_speed += 0.1;
            return true;
        }
        if (item->getMtype() == BombPlus) {
            m_nbreBomb += 1;
            m_bombes.push_back(new Bomb());
            return true;
        }

    }
    return false;
}
void BombermanPlayer::draw(sf::RenderWindow& window)
{
    window.draw(m_sprite);
}

void BombermanPlayer::updateHitBoxPosition()
{
    m_hitBox.setPosition(sf::Vector2f(m_sprite.getPosition().x + 3, m_sprite.getPosition().y + 20));
}



