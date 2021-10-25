#pragma once
#include <SFML/Graphics.hpp>
#include "Global.h"

class Bar
{
public:
	Bar();
	void changeNumberOflife();
	void add100Point();
	void draw(sf::RenderWindow& window);

private:
	sf::Texture m_texture;
	sf::Texture m_textureNumberLife;
	sf::Sprite m_sprite;
	sf::Sprite m_spriteNumberLife;
	sf::IntRect m_rect;
	sf::IntRect m_rectNumberLife;
	vector<sf::Sprite> m_score;
	int m_totScore;

};

