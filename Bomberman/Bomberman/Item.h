#pragma once
#include "Global.h"
#include "Box.h"
#include <SFML/Graphics.hpp>

class Item
{
	public:
		Item();
		~Item();
		void PlaceItem(Position p);
		void draw(sf::RenderWindow& window);

		TypeItem getMtype() const;
		void setMtype(TypeItem mtype);

		sf::Sprite getMsprite() const;
		void setMsprite(sf::Sprite msprite);

		sf::Texture getMtexture() const;
		void setMtexture(sf::Texture mtexture);

		sf::IntRect getMrect() const;
		void setMrect(sf::IntRect mrect);

		int getWhatType() const;
		void setWhatType(int WhatType);
	private:
		TypeItem m_type;
		sf::Sprite m_sprite;
		sf::Texture m_texture;
		sf::IntRect m_rect;
		int WhatType;

};

