#pragma once
#include <SFML/Graphics.hpp>
#include "Global.h"
#include "Explosion.h"
#include "Item.h"

class Bomb
{
public:
	Bomb();
	Bomb(sf::IntRect rect, Position position);
	~Bomb();
	Explosion* getExplosion();
	sf::Texture getTexture();
	sf::Sprite getSprite();
	sf::IntRect getRect();
	Position getPosition();
	sf::Clock& getMinuteur();
	int getCompteur();
	bool getCheckBoxToDestroy();
	int getNbreBoxDestroy();
	void setCheckBoxToDestroy(bool checkBoxToDestroy);
	void setCompteur(int compteur);
	void setTexture(sf::Texture texture);
	void setSprite(sf::Sprite sprite);
	void setRect(sf::IntRect rect);
	void setPosition(Position position);
	vector<Item*> getItems() const;
	void setItems(vector<Item*> items);

	int getChanceToPlace() const;
	void setChanceToPlace(int ChanceToPlace);
	void setNbreBoxDestroy(int NbreBoxDestroy);
	bool animation();
	void draw(sf::RenderWindow& window);
	bool explode(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window, bool IsExplode);
	bool destructBox(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window, bool IsDestroyBox);
	bool chainAnimationExplosion(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window);
	void update(sf::RectangleShape rect);
	void updateItems(int index);
	void loadBoxesToDestroy(std::array<std::string, MAP_HEIGHT>& map_sketch);
	void removeBomb();



private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::IntRect m_rect;
	Position m_position;
	int m_compteur;
	sf::Clock clock;
	sf::Clock minuteur;
	Explosion* explosion;
	int m_NbreBoxDestroy;
	//bool IsDestroyBox;
	bool m_checkBoxToDestroy;
	//bool IsExplode;
	vector<Item*> items;
	int ChanceToPlace;

};

