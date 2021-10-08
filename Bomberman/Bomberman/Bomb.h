#pragma once
#include <SFML/Graphics.hpp>
#include "Global.h"

class Bomb
{
public:
	Bomb();
	Bomb(sf::IntRect rect, Position position);
	sf::Texture getTexture();
	sf::Sprite getSprite();
	sf::IntRect getRect();
	Position getPosition();
	int getCompteur();
	void setCompteur(int compteur);
	void setTexture(sf::Texture texture);
	void setSprite(sf::Sprite sprite);
	void setRect(sf::IntRect rect);
	void setPosition(Position position);
	void animation(sf::Clock& clock, sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);
	sf::Sprite explosion(Position p);

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::IntRect m_rect;
	Position m_position;
	int m_compteur;
};

