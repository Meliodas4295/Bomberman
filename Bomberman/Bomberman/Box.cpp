#include "Box.h"

Box::Box()
{
   m_textBox.loadFromFile("stage.png");
   m_destroyBox.setTexture(m_textBox);
   box = sf::IntRect(17 * 17, 33 * 17.1, 16, 16);
   m_destroyBox.setTextureRect(box);
}

Box::Box(Direction dir, int n, Position p):compteur(0)
{
    m_n = n;
    m_dir = dir;
    m_p = p;
    m_textBox.loadFromFile("stage.png");
    m_destroyBox.setTexture(m_textBox);
    box = sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16);
    m_destroyBox.setTextureRect(box);
    m_destroyBox.setPosition(p.x, p.y);
}

bool Box::animationDestructionBox()
{
    /*if (clock.getElapsedTime().asSeconds() > 0.2f) {
        cout << box.left/17 << endl;
        if (box.left / 17 == 19) {
            box.left = 17 * 16.4;
            return true;
        }
            
        else
            box.left += 17;

        m_destroyBox.setTextureRect(box);
        clock.restart();
    }
    return false;*/
    int currenttimeint = clock.getElapsedTime().asSeconds();
    int animation1framenumber = static_cast<unsigned int>(clock.getElapsedTime().asSeconds() * 6.f) % 6;
    m_destroyBox.setTextureRect(sf::IntRect((animation1framenumber+17)* 16.4, box.top, box.width, box.height));
    if (animation1framenumber == 5 && compteur == 0) {
        compteur += 1;
        return true;
    }
    else {
        return false;
    }
}

void Box::destroyBox(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window)
{
   
}

void Box::draw(sf::RenderWindow& window)
{
    window.draw(m_destroyBox);
}

sf::Texture Box::getMtextBox() const
{
    return m_textBox;
}

void Box::setMtextBox(sf::Texture mtextBox)
{
    m_textBox = mtextBox;
}

int Box::getCompteur()
{
    return compteur;
}

void Box::setCompteur(int mCompteur)
{
    compteur = mCompteur;
}

sf::Sprite Box::getMdestroyBox() const
{
    return m_destroyBox;
}

void Box::setMdestroyBox(sf::Sprite mdestroyBox)
{
    m_destroyBox = mdestroyBox;
}

sf::IntRect Box::getBox() const
{
    return box;
}

void Box::setBox(sf::IntRect box)
{
    this->box = box;
}

Direction Box::getMdir() const
{
    return m_dir;
}

void Box::setMdir(Direction mdir)
{
    m_dir = mdir;
}

Position Box::getMp() const
{
    return m_p;
}

void Box::setMp(Position mp)
{
    m_p = mp;
}

int Box::getMn() const
{
    return m_n;
}

void Box::setMn(int mn)
{
    m_n = mn;
}

sf::Clock& Box::getClock()
{
    return clock;
}

void Box::setClock(sf::Clock clock)
{
    this->clock = clock;
}

