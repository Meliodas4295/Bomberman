#include "Bar.h"

Bar::Bar()
{
    m_texture.loadFromFile("barMenu.png");
    m_sprite.setTexture(m_texture);
    m_rect = sf::IntRect(0, 0, CELL_SIZE * 16, CELL_SIZE * 2);
    m_sprite.setPosition(0, 0);
    m_sprite.setTextureRect(m_rect);
    m_sprite.setScale(1.6875, 1);

    m_textureNumberLife.loadFromFile("timer.png");
    m_spriteNumberLife.setTexture(m_textureNumberLife);
    m_rectNumberLife = sf::IntRect(9*CELL_SIZE/2, 0, CELL_SIZE/2, CELL_SIZE);
    m_spriteNumberLife.setPosition(CELL_SIZE + 24, CELL_SIZE/2);
    m_spriteNumberLife.setTextureRect(m_rectNumberLife);
    m_spriteNumberLife.setScale(1.6875, 1);

    for (int i = 0; i < 5; i++) {
        sf::Sprite unit(m_textureNumberLife);
        unit.setScale(1.6875, 1);
        unit.setPosition(6 * CELL_SIZE +14 + 16 * i, (CELL_SIZE / 2)+1);
        unit.setTextureRect(sf::IntRect(0, 0, CELL_SIZE / 2, CELL_SIZE));
        m_score.push_back(unit);
    }
}

void Bar::changeNumberOflife()
{
    m_rectNumberLife.left -= CELL_SIZE/2;
    m_spriteNumberLife.setTextureRect(m_rectNumberLife);
}

void Bar::add100Point()
{
    m_totScore += 100;

    m_score[2].setTextureRect(sf::IntRect((4 + m_totScore / 100) * CELL_SIZE / 2, 0, CELL_SIZE / 2, CELL_SIZE));
    /*sf::Sprite hundred(m_textureNumberLife);
    hundred.setTextureRect(sf::IntRect((3 + m_totScore / 100) * CELL_SIZE / 2, 0, CELL_SIZE / 2, CELL_SIZE));
    hundred.setPosition(4 * CELL_SIZE, CELL_SIZE / 2);
    m_score.push_back(hundred);

    sf::Sprite decade(m_textureNumberLife);
    decade.setPosition(4 * CELL_SIZE + 16, CELL_SIZE / 2);
    decade.setTextureRect(sf::IntRect(0, 0, CELL_SIZE / 2, CELL_SIZE));
    m_score.push_back(decade);

    sf::Sprite unit(m_textureNumberLife);
    decade.setPosition(4 * CELL_SIZE + 32, CELL_SIZE / 2);
    unit.setTextureRect(sf::IntRect(0, 0, CELL_SIZE / 2, CELL_SIZE));
    m_score.push_back(unit);*/
}

void Bar::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
    window.draw(m_spriteNumberLife);
    for (int i = 0; i < 5; i++) {
        window.draw(m_score[i]);
    }
}
