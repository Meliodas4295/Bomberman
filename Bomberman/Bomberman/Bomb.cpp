#include "Bomb.h"

Bomb::Bomb()
{
}

Bomb::Bomb(sf::IntRect rect, Position position): m_rect(rect), m_position(position), m_compteur(0) {
	m_texture.loadFromFile("14bomberman.png");
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(m_rect);
	m_sprite.setPosition(m_position.x, m_position.y);
}

sf::Texture Bomb::getTexture()
{
	return m_texture;
}

sf::Sprite Bomb::getSprite()
{
	return m_sprite;
}

sf::IntRect Bomb::getRect()
{
	return m_rect;
}

Position Bomb::getPosition()
{
	return m_position;
}

int Bomb::getCompteur()
{
	return m_compteur;
}

void Bomb::setCompteur(int compteur)
{
	m_compteur = compteur;
}

void Bomb::setTexture(sf::Texture texture)
{
	m_texture = texture;
}

void Bomb::setSprite(sf::Sprite sprite)
{
	m_sprite = sprite;
}

void Bomb::setRect(sf::IntRect rect)
{
	m_rect = rect;
}

void Bomb::setPosition(Position position)
{
	m_position = position;
}

void Bomb::animation(sf::Clock& clock, sf::RenderWindow& window)
{
    if (clock.getElapsedTime().asSeconds() > 0.2f) {
        if (m_rect.left == 3 * 17) {
            m_rect = sf::IntRect(17, 258, CELL_SIZE, CELL_SIZE);
        }
        else {
			m_rect.left += 17;
        }

        this->draw(window);
        clock.restart();
        m_compteur = m_compteur + 1;
    }
}

void Bomb::draw(sf::RenderWindow& window)
{
	m_sprite.setTextureRect(m_rect);
	window.draw(m_sprite);
}

sf::Sprite Bomb::explosion(Position p)
{
	sf::Sprite explosion(m_texture);
	explosion.setTextureRect(sf::IntRect(9 * 17 + 8, 270, 3 * CELL_SIZE, 3 * CELL_SIZE ));
	explosion.setPosition(p.x, p.y);
	return explosion;
}



