#include "Explosion.h"
#include "Box.h"
Explosion::Explosion(){
	m_texture.loadFromFile("exp.png");

    dir[0] = Up;
    dir[1] = Down;
    dir[2] = Right;
    dir[3] = Left;

    m_rectMidle = sf::IntRect(0,0,32,32);
    m_midleExplosion.setTexture(m_texture);
    m_midleExplosion.setTextureRect(m_rectMidle);
    m_midleExplosion.setScale(0.5, 0.5);

    for (int i = 0; i < 4; i++) {
        sf::Sprite flame(m_texture);
        sf::IntRect rect = sf::IntRect(32*(3+i), 0, 32, 32);
        flame.setTextureRect(rect);
        flame.setScale(0.5, 0.5);
        ExplosionFirstLayer.insert(pair<int,sf::Sprite>(dir[i], flame));
        RectFirstLayer.insert(pair<int, sf::IntRect>(dir[i], rect));

    }
    for (int i = 0; i < 2; i++) {
        sf::Sprite flame(m_texture);
        sf::IntRect rect = sf::IntRect(32 * (1+i), 0, 32, 32);
        flame.setTextureRect(rect);
        flame.setScale(0.5, 0.5);
        ExplosionSecondLayer.push_back(flame);
        RectSecondLayer.push_back(rect);

    }
		
}

Explosion::~Explosion()
{
}

void Explosion::RestartClock()
{
    clock.restart();
}

sf::Clock& Explosion::getClock()
{
    return clock;
}

sf::Texture Explosion::getMtexture() const
{
    return m_texture;
}

vector<Box*> Explosion::getBoxes() const
{
    return Boxes;
}

int Explosion::getCompteur()
{
    return m_compteur;
}

void Explosion::setCompteur(int compteur)
{
    m_compteur = compteur;
}

void Explosion::setMtexture(sf::Texture mtexture)
{
    m_texture = mtexture;
}





bool Explosion::animation(sf::Sprite& sprite, sf::IntRect& rect)
{
    int currenttimeint = clock.getElapsedTime().asSeconds();
    int animation1framenumber = static_cast<unsigned int>(clock.getElapsedTime().asSeconds() * 3.f) % 3;
    sprite.setTextureRect(sf::IntRect(rect.left, animation1framenumber*32, rect.width, rect.height));
    if (currenttimeint >= 1) {
        return true;
    }
    else {
        return false;
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

bool Explosion::frameworkExplosion(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::RenderWindow& window)
{
    m_midleExplosion.setPosition(p.x, p.y);
    window.draw(m_midleExplosion);
    animation(m_midleExplosion, m_rectMidle);

    for (int i = 0; i < ExplosionFirstLayer.size(); i++) {
        if (collisionRock(map_sketch, p, Direction(i), 0) && collisionBox(map_sketch, p, Direction(i), 0)) {
            if(Direction(i)==Down)
                ExplosionFirstLayer.at(Direction(i)).setPosition(p.x, p.y + 16);
            if (Direction(i) == Up)
                ExplosionFirstLayer.at(Direction(i)).setPosition(p.x, p.y - 16);
            if (Direction(i) == Right)
                ExplosionFirstLayer.at(Direction(i)).setPosition(p.x + 16, p.y);
            if (Direction(i) == Left)
                ExplosionFirstLayer.at(Direction(i)).setPosition(p.x - 16, p.y);
            window.draw(ExplosionFirstLayer[i]);
            animation(ExplosionFirstLayer[i], RectFirstLayer[i]);
        }
    }
    
    return animation(m_midleExplosion, m_rectMidle);
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
        return false;
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

bool Explosion::IsPlayerHasTouch(sf::Sprite& player)
{
    for (int i = 0; i < ExplosionFirstLayer.size(); i++) {
        //cout << ExplosionFirstLayer[i].getPosition().x << "  ;  " << player.getPosition().x << endl;
        if (ExplosionFirstLayer[i].getGlobalBounds().intersects(player.getGlobalBounds())) {
            //flames.clear();
            return true;
        }
    }
    //cout << m_midleExplosion.getPosition().x << "  ;  " << player.getPosition().x << endl;
    if (m_midleExplosion.getGlobalBounds().intersects(player.getGlobalBounds())) {
        return true;
    }
    return false;
}

void Explosion::CheckBoxToDestroy(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p)
{

    //vector<Box*> m_boxs;
    for (int i = 0; i < 4; i++) {
        //for (int j = 0; j < 2; j++) {
            if (!collisionBox(map_sketch, p, Direction(i), 0)) {
                switch (Direction(i)) {
                case Down:
                    Boxes.push_back(new Box(Direction(i), 0, { short(p.x) , short(p.y + 16) }));
                    break;
                case Up:
                    Boxes.push_back(new Box(Direction(i), 0, { short(p.x) , short(p.y - 16) }));
                    break;
                case Left:
                    Boxes.push_back(new Box(Direction(i), 0, { short(p.x - 16) , short(p.y) }));
                    break;
                case Right:
                    Boxes.push_back(new Box(Direction(i), 0, { short(p.x + 16) , short(p.y) }));
                    break;
                }
           // }
        }
    }
}

void Explosion::removeFlame()
{
    for (int i = 0; i < ExplosionFirstLayer.size(); i++) {
        ExplosionFirstLayer[i].setPosition(-12, -12);
    }
    m_midleExplosion.setPosition(-12, -12);
    
}

void Explosion::updateBox()
{
    Boxes.clear();
}

sf::Sprite Explosion::getMmidleExplosion() const
{
    return m_midleExplosion;
}

void Explosion::setMmidleExplosion(sf::Sprite mmidleExplosion)
{
    m_midleExplosion = mmidleExplosion;
}

sf::IntRect Explosion::getMrectMidle() const
{
    return m_rectMidle;
}

void Explosion::setMrectMidle(sf::IntRect mrectMidle)
{
    m_rectMidle = mrectMidle;
}

std::map<int,sf::Sprite> Explosion::getExplosionFirstLayer() const
{
    return ExplosionFirstLayer;
}

void Explosion::setExplosionFirstLayer(std::map<int,sf::Sprite> ExplosionFirstLayer)
{
    this->ExplosionFirstLayer = ExplosionFirstLayer;
}

vector<sf::Sprite> Explosion::getExplosionSecondLayer() const
{
    return ExplosionSecondLayer;
}

void Explosion::setExplosionSecondLayer(vector<sf::Sprite> ExplosionSecondLayer)
{
    this->ExplosionSecondLayer = ExplosionSecondLayer;
}

std::map<int,sf::IntRect> Explosion::getRectFirstLayer() const
{
    return RectFirstLayer;
}

void Explosion::setRectFirstLayer(std::map<int,sf::IntRect> RectFirstLayer)
{
    this->RectFirstLayer = RectFirstLayer;
}

vector<sf::IntRect> Explosion::getRectSecondLayer() const
{
    return RectSecondLayer;
}

void Explosion::setRectSecondLayer(vector<sf::IntRect> RectSecondLayer)
{
    this->RectSecondLayer = RectSecondLayer;
}
int Explosion::getMcompteur() const
{
    return m_compteur;
}

void Explosion::setMcompteur(int mcompteur)
{
    m_compteur = mcompteur;
}

