#pragma once
#pragma once
#include "Global.h"
//#include "Bomb.h"
#include "Box.h"

#include <SFML/Graphics.hpp>
#include <iostream>


class Explosion
{
private:
    sf::Texture m_texture;
    sf::Sprite m_midleExplosion;
    sf::IntRect m_rectMidle;
    std::map<int, sf::Sprite> ExplosionFirstLayer;
    vector<sf::Sprite> ExplosionSecondLayer;
    std::map<int, sf::IntRect> RectFirstLayer;
    vector<sf::IntRect> RectSecondLayer;
    int dir[4];
    int point1Collision[2];
    int point2Collision[2];
    int point3Collision[2];
    int point4Collision[2];
    sf::Clock clock;
    vector<Box*> Boxes;
    int m_compteur;
public:

    Explosion();
    ~Explosion();

    sf::Sprite getMmidleExplosion() const;
    void setMmidleExplosion(sf::Sprite mmidleExplosion);

    sf::IntRect getMrectMidle() const;
    void setMrectMidle(sf::IntRect mrectMidle);

    std::map<int, sf::Sprite> getExplosionFirstLayer() const;
    void setExplosionFirstLayer(std::map<int, sf::Sprite> ExplosionFirstLayer);

    vector<sf::Sprite> getExplosionSecondLayer() const;
    void setExplosionSecondLayer(vector<sf::Sprite> ExplosionSecondLayer);

    std::map<int, sf::IntRect> getRectFirstLayer() const;
    void setRectFirstLayer(std::map<int, sf::IntRect> RectFirstLayer);

    vector<sf::IntRect> getRectSecondLayer() const;
    void setRectSecondLayer(vector<sf::IntRect> RectSecondLayer);


    int getMcompteur() const;
    void setMcompteur(int mcompteur);

    void RestartClock();

    sf::Clock& getClock();

    sf::Texture getMtexture() const;

    vector<Box*> getBoxes() const;

    int getCompteur();
    void setCompteur(int compteur);

    void setMtexture(sf::Texture mtexture);

    bool animation(sf::Sprite& sprite, sf::IntRect& rect);

    void createCoordonates(Position p);

    bool collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, Direction dir, int n);

    bool frameworkExplosion(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::RenderWindow& window);

    /* bool animationDestructionBox(sf::Clock& clock);

     void destroyBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::Clock& clock, sf::RenderWindow& window);*/

    bool collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, Direction dir, int n);

    bool IsWay3DBox(std::array<std::string, MAP_HEIGHT>& map_sketch, int x, int y);

    bool IsPlayerHasTouch(sf::Sprite& player);

    void CheckBoxToDestroy(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p);

    void removeFlame();

    void updateBox();


};