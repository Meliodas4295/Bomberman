#pragma once
#include "Global.h"
#include <SFML/Graphics.hpp>
#include "Bomb.h";
class Explosion
{
public:
	Explosion();

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
    sf::Texture m_textBox;
    sf::Sprite m_destroyBox;
    sf::IntRect box;
	vector<sf::Sprite> m_midleExplosion;
	vector<sf::Sprite> m_firstUpExplosion;
	vector<sf::Sprite> m_secondUpExplosion;
	vector<sf::Sprite> m_firstDownExplosion;
	vector<sf::Sprite> m_secondDownExplosion;
	vector<sf::Sprite> m_firstRightExplosion;
	vector<sf::Sprite> m_secondRightExplosion;
	vector<sf::Sprite> m_firstLeftExplosion;
	vector<sf::Sprite> m_secondLeftExplosion;
    int point1Collision[2];
    int point2Collision[2];
    int point3Collision[2];
    int point4Collision[2];
    bool RestartClock;
    bool firstBlock;
public:

    bool getMRestartClock() const;
    void setMRestartClock(bool mRestartClock);

    sf::Texture getMtexture() const;
    void setMtexture(sf::Texture mtexture);

    sf::Sprite getMsprite() const;
    void setMsprite(sf::Sprite msprite);

    sf::Sprite getMdestroyBox() const;
    void setMdestroyBox(sf::Sprite mdestroyBox);


    vector<sf::Sprite> getMmidleExplosion() const;
    void setMmidleExplosion(vector<sf::Sprite> mmidleExplosion);

    vector<sf::Sprite> getMfirstUpExplosion() const;
    void setMfirstUpExplosion(vector<sf::Sprite> mfirstUpExplosion);

    vector<sf::Sprite> getMsecondUpExplosion() const;
    void setMsecondUpExplosion(vector<sf::Sprite> msecondUpExplosion);

    vector<sf::Sprite> getMfirstDownExplosion() const;
    void setMfirstDownExplosion(vector<sf::Sprite> mfirstDownExplosion);

    vector<sf::Sprite> getMsecondDownExplosion() const;
    void setMsecondDownExplosion(vector<sf::Sprite> msecondDownExplosion);

    vector<sf::Sprite> getMfirstRightExplosion() const;
    void setMfirstRightExplosion(vector<sf::Sprite> mfirstRightExplosion);

    vector<sf::Sprite> getMsecondRightExplosion() const;
    void setMsecondRightExplosion(vector<sf::Sprite> msecondRightExplosion);

    vector<sf::Sprite> getMfirstLeftExplosion() const;
    void setMfirstLeftExplosion(vector<sf::Sprite> mfirstLeftExplosion);

    vector<sf::Sprite> getMsecondLeftExplosion() const;
    void setMsecondLeftExplosion(vector<sf::Sprite> msecondLeftExplosion);

    void animation(sf::Clock& clock, sf::Sprite& sprite, vector<sf::Sprite> sprites);

    void createCoordonates(Position p);

    bool collisionRock(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, Direction dir, int n);

    void frameworkExplosion(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::RenderWindow& window, sf::Clock& clock);

    bool animationDestructionBox(sf::Clock& clock);

    void destroyBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::Clock& clock, sf::RenderWindow& window);

    bool collisionBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, Direction dir, int n);

    bool IsWay3DBox(std::array<std::string, MAP_HEIGHT>& map_sketch, int x, int y);


};

