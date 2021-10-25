#include "Item.h"

Item::Item()
{
	m_type = SpeedPlus;
	m_texture.loadFromFile("items.png");
	m_sprite.setTexture(m_texture);
	/*if (m_type == BombPlus) {
		m_rect = sf::IntRect(20, 3, 16, 16);
	}
	if (m_type == ExplosionPlus) {
		m_rect = sf::IntRect(3, 3, 16, 16);
	}
	if (m_type == SpeedPlus) {
		m_rect = sf::IntRect(37, 3, 16, 16);
	}*/
	//m_sprite.setTextureRect(m_rect);
}

Item::~Item()
{
}

void Item::PlaceItem(Position p)
{
	WhatType = 1;
	if (WhatType == 0) {
		m_type = SpeedPlus;
		m_rect = sf::IntRect(54, 3, 16, 16);
		m_sprite.setTextureRect(m_rect);
	}
	if (WhatType == 1) {
		m_type = BombPlus;
		m_rect = sf::IntRect(37, 3, 16, 16);
		m_sprite.setTextureRect(m_rect);
	}
	/*if (WhatType == 2) {
		m_type = ExplosionPlus;
		m_rect = sf::IntRect(3, 3, 16, 16);
		m_sprite.setTextureRect(m_rect);
	}*/
	m_sprite.setPosition(p.x, p.y);
	
}

void Item::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
}

TypeItem Item::getMtype() const
{
    return m_type;
}

void Item::setMtype(TypeItem mtype)
{
    m_type = mtype;
}

sf::Sprite Item::getMsprite() const
{
    return m_sprite;
}

void Item::setMsprite(sf::Sprite msprite)
{
    m_sprite = msprite;
}

sf::Texture Item::getMtexture() const
{
    return m_texture;
}

void Item::setMtexture(sf::Texture mtexture)
{
    m_texture = mtexture;
}

sf::IntRect Item::getMrect() const
{
    return m_rect;
}

void Item::setMrect(sf::IntRect mrect)
{
    m_rect = mrect;
}

int Item::getWhatType() const
{
    return WhatType;
}

void Item::setWhatType(int WhatType)
{
    this->WhatType = WhatType;
}

