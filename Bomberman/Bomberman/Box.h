#pragma once
#include "Global.h"
#include <SFML/Graphics.hpp>
class Box
{
private:
    
    sf::Texture m_textBox;
    sf::Sprite m_destroyBox;
    sf::IntRect box;
    Direction m_dir;
    Position m_p;
    int m_n;
    sf::Clock clock;
    int compteur;
public:
    Box();
    Box(Direction dir, int n, Position p);


    bool animationDestructionBox();

    void destroyBox(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window);

    void draw(sf::RenderWindow& window);
    sf::Texture getMtextBox() const;
    void setMtextBox(sf::Texture mtextBox);

    int getCompteur();
    void setCompteur(int mCompteur);

    sf::Sprite getMdestroyBox() const;
    void setMdestroyBox(sf::Sprite mdestroyBox);

    sf::IntRect getBox() const;
    void setBox(sf::IntRect box);

    Direction getMdir() const;
    void setMdir(Direction mdir);

    Position getMp() const;
    void setMp(Position mp);

    int getMn() const;
    void setMn(int mn);

    sf::Clock& getClock();
    void setClock(sf::Clock clock);

};

