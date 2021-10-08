#include "Explosion.h"

Explosion::Explosion(): RestartClock(false){
	m_texture.loadFromFile("explosion_16x16.png");
	m_sprite.setTexture(m_texture);
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((2 + 5 * i)*17, 49, 16, 16));
			m_midleExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((1 + 5 * i) * 17, 3 * 16.5 , 16, 16));
		m_firstLeftExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((5 * i) * 17, 3 * 16.5, 16, 16));
		m_secondLeftExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((3 + 5 * i) * 17, 3 * 16.5, 16, 16));
		m_firstRightExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((4 + 5 * i) * 17 , 3 * 16.5, 16, 16));
		m_secondRightExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17, 32, 16, 16));
		m_firstUpExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17 , 17, 16, 14));
		m_secondUpExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17, 4 * 16.5, 16, 16));
		m_firstDownExplosion.push_back(m_sprite);
	}
	for (int i = 0; i < 3; i++) {
		m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17, 5 * 16.5, 16, 16));
		m_secondDownExplosion.push_back(m_sprite);
	}
    m_textBox.loadFromFile("stage.png");
    m_destroyBox.setTexture(m_textBox);
    box = sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16);
    m_destroyBox.setTextureRect(box);
		
}

bool Explosion::getMRestartClock() const
{
    return RestartClock;
}

void Explosion::setMRestartClock(bool mRestartClock)
{
    RestartClock = mRestartClock;
}

sf::Texture Explosion::getMtexture() const
{
    return m_texture;
}

void Explosion::setMtexture(sf::Texture mtexture)
{
    m_texture = mtexture;
}

sf::Sprite Explosion::getMsprite() const
{
    return m_sprite;
}

void Explosion::setMsprite(sf::Sprite msprite)
{
    m_sprite = msprite;
}

sf::Sprite Explosion::getMdestroyBox() const
{
    return m_destroyBox;
}

void Explosion::setMdestroyBox(sf::Sprite mdestroyBox)
{
    m_destroyBox = mdestroyBox;
}

vector<sf::Sprite> Explosion::getMmidleExplosion() const
{
    return m_midleExplosion;
}

void Explosion::setMmidleExplosion(vector<sf::Sprite> mmidleExplosion)
{
    m_midleExplosion = mmidleExplosion;
}

vector<sf::Sprite> Explosion::getMfirstUpExplosion() const
{
    return m_firstUpExplosion;
}

void Explosion::setMfirstUpExplosion(vector<sf::Sprite> mfirstUpExplosion)
{
    m_firstUpExplosion = mfirstUpExplosion;
}

vector<sf::Sprite> Explosion::getMsecondUpExplosion() const
{
    return m_secondUpExplosion;
}

void Explosion::setMsecondUpExplosion(vector<sf::Sprite> msecondUpExplosion)
{
    m_secondUpExplosion = msecondUpExplosion;
}

vector<sf::Sprite> Explosion::getMfirstDownExplosion() const
{
    return m_firstDownExplosion;
}

void Explosion::setMfirstDownExplosion(vector<sf::Sprite> mfirstDownExplosion)
{
    m_firstDownExplosion = mfirstDownExplosion;
}

vector<sf::Sprite> Explosion::getMsecondDownExplosion() const
{
    return m_secondDownExplosion;
}

void Explosion::setMsecondDownExplosion(vector<sf::Sprite> msecondDownExplosion)
{
    m_secondDownExplosion = msecondDownExplosion;
}

vector<sf::Sprite> Explosion::getMfirstRightExplosion() const
{
    return m_firstRightExplosion;
}

void Explosion::setMfirstRightExplosion(vector<sf::Sprite> mfirstRightExplosion)
{
    m_firstRightExplosion = mfirstRightExplosion;
}

vector<sf::Sprite> Explosion::getMsecondRightExplosion() const
{
    return m_secondRightExplosion;
}

void Explosion::setMsecondRightExplosion(vector<sf::Sprite> msecondRightExplosion)
{
    m_secondRightExplosion = msecondRightExplosion;
}

vector<sf::Sprite> Explosion::getMfirstLeftExplosion() const
{
    return m_firstLeftExplosion;
}

void Explosion::setMfirstLeftExplosion(vector<sf::Sprite> mfirstLeftExplosion)
{
    m_firstLeftExplosion = mfirstLeftExplosion;
}

vector<sf::Sprite> Explosion::getMsecondLeftExplosion() const
{
    return m_secondLeftExplosion;
}

void Explosion::setMsecondLeftExplosion(vector<sf::Sprite> msecondLeftExplosion)
{
    m_secondLeftExplosion = msecondLeftExplosion;
}

void Explosion::animation(sf::Clock& clock, sf::Sprite& sprite, vector<sf::Sprite> sprites)
{
    if (clock.getElapsedTime().asSeconds() > 0.2f) {
        sprite.setTextureRect(sprites[1].getTextureRect());
    }
    if (clock.getElapsedTime().asSeconds() > 0.4f) {
        sprite.setTextureRect(sprites[0].getTextureRect());
    }
    if (clock.getElapsedTime().asSeconds() > 0.6f) {
        sprite.setTextureRect(sprites[2].getTextureRect());
        clock.restart();
    }
}

void Explosion::createCoordonates(Position p)
{
    point1Collision[0] = floor(p.x / CELL_SIZE);
    point1Collision[1] = floor(p.y / CELL_SIZE);
    point2Collision[0] = floor((p.x + 12) / CELL_SIZE);
    point2Collision[1] = floor((p.y + 8) / CELL_SIZE);
    point3Collision[0] = floor((p.x - 4) / CELL_SIZE);
    point3Collision[1] = floor((p.y + 17) / CELL_SIZE);
    point4Collision[0] = floor((p.x + 17) / CELL_SIZE);
    point4Collision[1] = floor((p.y - 4) / CELL_SIZE);
}

bool Explosion::collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, Direction dir, int n)
{
    this->createCoordonates(p);

    if (dir == Down) {
        return !(map_sketch[point3Collision[1]+n][point1Collision[0]] == '#') && !(map_sketch[point3Collision[1]+n][point2Collision[0]] == '#');
    }
    else if (dir == Left) {
        return !(map_sketch[point1Collision[1]][point3Collision[0]-n] == '#') && !(map_sketch[point2Collision[1]][point3Collision[0]-n] == '#');
    }
    else if (dir == Right) {
        return !(map_sketch[point1Collision[1]][point4Collision[0]+n] == '#') && !(map_sketch[point2Collision[1]][point4Collision[0]+n] == '#');
    }
    else if (dir == Up) {
        return !(map_sketch[point4Collision[1]-n][point1Collision[0]] == '#') && !(map_sketch[point4Collision[1]-n][point2Collision[0]] == '#');
    }
    else {
        return true;
    }
}

void Explosion::frameworkExplosion(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::RenderWindow& window,sf::Clock& clock)
{
    m_midleExplosion[2].setPosition(p.x, p.y);
    window.draw(m_midleExplosion[2]);
    m_midleExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 49, 16, 16));
    animation(clock, m_midleExplosion[2], m_midleExplosion);
    if (collisionRock(map_sketch, p, Down, 0) && collisionBox(map_sketch, p, Down, 0)) {
        m_firstDownExplosion[2].setPosition(p.x, p.y + 16);
        window.draw(m_firstDownExplosion[2]);
        m_firstDownExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 4 * 16.5, 16, 16));
        animation(clock, m_firstDownExplosion[2], m_firstDownExplosion);
        if (collisionRock(map_sketch, p, Down, 1) && collisionBox(map_sketch, p, Down, 1)) {
            m_secondDownExplosion[2].setPosition(p.x, p.y + 30);
            window.draw(m_secondDownExplosion[2]);
            m_secondDownExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 5 * 16.5, 16, 16));
            animation(clock, m_secondDownExplosion[2], m_secondDownExplosion);
        }
    }
    if (collisionRock(map_sketch, p, Left, 0) && collisionBox(map_sketch, p, Left, 0)) {
        m_firstLeftExplosion[2].setPosition(p.x - 16, p.y);
        window.draw(m_firstLeftExplosion[2]);
        m_firstLeftExplosion[2].setTextureRect(sf::IntRect((1 + 5 * 2) * 17, 3 * 16.5, 16, 16));
        animation(clock, m_firstLeftExplosion[2], m_firstLeftExplosion);
        if (collisionRock(map_sketch, p, Left, 1) && collisionBox(map_sketch, p, Left, 1)) {
            m_secondLeftExplosion[2].setPosition(p.x - 32, p.y);
            window.draw(m_secondLeftExplosion[2]);
            m_secondLeftExplosion[2].setTextureRect(sf::IntRect((5 * 2) * 17, 3 * 16.5, 16, 16));
            animation(clock, m_secondLeftExplosion[2], m_secondLeftExplosion);
        }
    }
    if (collisionRock(map_sketch, p, Right, 0) && collisionBox(map_sketch, p, Right, 0)) {
        m_firstRightExplosion[2].setPosition(p.x + 16, p.y);
        window.draw(m_firstRightExplosion[2]);
        m_firstRightExplosion[2].setTextureRect(sf::IntRect((3 + 5 * 2) * 17, 3 * 16.5, 16, 16));
        animation(clock, m_firstRightExplosion[2], m_firstRightExplosion);
        if (collisionRock(map_sketch, p, Right, 1) && collisionBox(map_sketch, p, Right, 1)) {
            m_secondRightExplosion[2].setPosition(p.x + 32, p.y);
            window.draw(m_secondRightExplosion[2]);
            m_secondRightExplosion[2].setTextureRect(sf::IntRect((4 + 5 * 2) * 17, 3 * 16.5, 16, 16));
            animation(clock, m_secondRightExplosion[2], m_secondRightExplosion);
        }
    }
    if (collisionRock(map_sketch, p, Up, 0) && collisionBox(map_sketch, p, Up, 0)) {
        m_firstUpExplosion[2].setPosition(p.x, p.y - 16);
        window.draw(m_firstUpExplosion[2]);
        m_firstUpExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 32, 16, 16));
        animation(clock, m_firstUpExplosion[2], m_firstUpExplosion);
        if (collisionRock(map_sketch, p, Up, 1) && collisionBox(map_sketch, p, Up, 1)) {
            m_secondUpExplosion[2].setPosition(p.x, p.y - 30);
            window.draw(m_secondUpExplosion[2]);
            m_secondUpExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 17, 16, 14));
            animation(clock, m_secondUpExplosion[2], m_secondUpExplosion);
        }
    }
}

bool Explosion::animationDestructionBox(sf::Clock& clock)
{
    bool IsBoxDestroy = false;
    if (clock.getElapsedTime().asSeconds() > 0.2f) {

        if (box.left == 22 * 16.4) {
            box.left = 17 * 16.4;
            IsBoxDestroy = true;
        }
        else
            box.left += 16.4;

        m_destroyBox.setTextureRect(box);
        if (IsBoxDestroy)
            return IsBoxDestroy;
        clock.restart();
    }
    else
        return false;
}

void Explosion::destroyBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::Clock& clock, sf::RenderWindow& window)
{
    /*if (map_sketch[floor((p.y + 32) / 16)][floor(p.x / 16)] == '=') {
        m_destroyBox.setPosition(p.x, p.y + 32);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor((p.y + 32) / 16)][floor(p.x / 16)] = '.';
        }
    }

    if (map_sketch[floor(p.y / 16)][floor((p.x - 32) / 16)] == '=' ) {
        m_destroyBox.setPosition(p.x - 32, p.y);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor(p.y / 16)][floor((p.x - 32) / 16)] = '.';
        }
    }

    if (map_sketch[floor(p.y / 16)][floor((p.x + 32) / 16)] == '=') {
        m_destroyBox.setPosition(p.x + 32, p.y);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor(p.y / 16)][floor((p.x + 32) / 16)] = '.';
        }
    }

    if (map_sketch[floor((p.y - 32) / 16)][floor(p.x / 16)] == '=') {
        m_destroyBox.setPosition(p.x, p.y - 32);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor((p.y - 32) / 16)][floor(p.x / 16)] = '.';
        }
    }*/


    if (map_sketch[floor((p.y + 16) / 16)][floor(p.x/16)] == '=') {
        m_destroyBox.setPosition(p.x, p.y+16);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor((p.y + 16) / 16)][floor(p.x / 16)] = '.';
        }
    }
    if (map_sketch[floor(p.y / 16)][floor((p.x-16) / 16)] == '=') {
        m_destroyBox.setPosition(p.x - 16, p.y);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor(p.y / 16)][floor((p.x - 16) / 16)] = '.';
        }
    }
    if (map_sketch[floor(p.y / 16)][floor((p.x + 16) / 16)] == '=') {
        m_destroyBox.setPosition(p.x + 16, p.y );
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {

            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor(p.y / 16)][floor((p.x + 16) / 16)] = '.';
        }
    }
    if (map_sketch[floor((p.y - 16) / 16)][floor(p.x / 16)] == '=') {
        m_destroyBox.setPosition(p.x, p.y - 16);
        window.draw(m_destroyBox);
        if (this->animationDestructionBox(clock)) {
            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
            map_sketch[floor((p.y - 16) / 16)][floor(p.x / 16)] = '.';
        }
    }
}

bool Explosion::collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, Direction dir, int n)
{
    this->createCoordonates(p);

    if (dir == Down) {
        return !(map_sketch[point3Collision[1]+n][point1Collision[0]] == '=') && !(map_sketch[point3Collision[1]+n][point2Collision[0]] == '=');
    }
    else if (dir == Left) {
        return !(map_sketch[point1Collision[1]][point3Collision[0]-n] == '=') && !(map_sketch[point2Collision[1]][point3Collision[0]-n] == '=');
    }
    else if (dir == Right) {
        return !(map_sketch[point1Collision[1]][point4Collision[0]+n] == '=') && !(map_sketch[point2Collision[1]][point4Collision[0]+n] == '=');
    }
    else if (dir == Up) {
        return !(map_sketch[point4Collision[1]-n][point1Collision[0]] == '=') && !(map_sketch[point4Collision[1]-n][point2Collision[0]] == '=');
    }
    else {
        return true;
    }
}


bool Explosion::IsWay3DBox(std::array<std::string, MAP_HEIGHT>& map_sketch, int x, int y)
{
    for (int i = 0; i < map_sketch[0].size(); i++) {
        if (map_sketch[y][x] == map_sketch[1][i]) {
            return true;
        }

    }
    return false;
}
