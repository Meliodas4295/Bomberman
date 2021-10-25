#include "Bomb.h"

Bomb::Bomb(): m_compteur(0), m_checkBoxToDestroy(true)
{
	m_texture.loadFromFile("bomb.png");
	m_rect = sf::IntRect(0, 0, CELL_SIZE, CELL_SIZE);
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(m_rect);
	explosion = new Explosion();
	//m_sprite.setPosition(m_position.x, m_position.y);
}

Bomb::Bomb(sf::IntRect rect, Position position): m_rect(rect), m_position(position), m_compteur(0), m_NbreBoxDestroy(0){
	m_texture.loadFromFile("bomb.png");
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(m_rect);
	m_sprite.setPosition(m_position.x, m_position.y);
}

Bomb::~Bomb()
{
	delete explosion;
	for (int i = 0; i < items.size(); i++) {
		delete items[i];
	}
}


Explosion* Bomb::getExplosion()
{
	return explosion;
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

sf::Clock& Bomb::getMinuteur()
{
	return minuteur;
}

int Bomb::getCompteur()
{
	return m_compteur;
}

bool Bomb::getCheckBoxToDestroy()
{
	return m_checkBoxToDestroy;
}

int Bomb::getNbreBoxDestroy()
{
	return 0;
}

void Bomb::setCheckBoxToDestroy(bool checkBoxToDestroy)
{
	m_checkBoxToDestroy = checkBoxToDestroy;
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

void Bomb::setNbreBoxDestroy(int NbreBoxDestroy)
{
}

bool Bomb::animation()
{
 //   if (clock.getElapsedTime().asSeconds() > 0.2f) {
 //       if (m_rect.left == 3 * 17) {
 //           m_rect = sf::IntRect(17, 258, CELL_SIZE, CELL_SIZE);
 //       }
 //       else {
	//		m_rect.left += 17;
 //       }

 //       //this->draw(window);
 //       clock.restart();
 //       //m_compteur = m_compteur + 1;
 //   }
	//if (minuteur.getElapsedTime().asSeconds() > 5.f) {
	//	return true;
	//}
	//return false;
	int currenttimeint = minuteur.getElapsedTime().asSeconds();
	int animation1framenumber = static_cast<unsigned int>(minuteur.getElapsedTime().asSeconds() * 3.f) % 3;
	m_sprite.setTextureRect(sf::IntRect(animation1framenumber*16 , 0, m_rect.width, m_rect.height));
	if (currenttimeint > 2) {
		return true;
	}
	else {
		return false;
	}
}

void Bomb::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
}

bool Bomb::explode(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window, bool IsExplode)
{
	if (IsExplode) {
		if (this->explosion->frameworkExplosion(map_sketch, m_position, window)) {
			this->removeBomb();
			return true;
		}
	}
	return false;
	//return explosion->frameworkExplosion(map_sketch, m_position, window);
}

bool Bomb::destructBox(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window, bool IsDestroyBox)
{
	if (IsDestroyBox) {
		if (explosion->getBoxes().size() != 0) {
			for (int i = 0; i < explosion->getBoxes().size(); i++) {
				this->explosion->getBoxes()[i]->draw(window);
				if (this->explosion->getBoxes()[i]->animationDestructionBox()) {
					ChanceToPlace = rand() % 2;
					if (floor(this->explosion->getBoxes()[i]->getMp().y / 16) == 11 && floor(this->explosion->getBoxes()[i]->getMp().x / 16) == 22) {
						map_sketch[floor(this->explosion->getBoxes()[i]->getMp().y / 16)][floor(this->explosion->getBoxes()[i]->getMp().x / 16)] = ' ';
					}
					else {
						if (ChanceToPlace == 1) {
							Item* item = new Item();
							item->PlaceItem(this->explosion->getBoxes()[i]->getMp());
							items.push_back(item);
						}
						map_sketch[floor(this->explosion->getBoxes()[i]->getMp().y / 16)][floor(this->explosion->getBoxes()[i]->getMp().x / 16)] = '.';
					}
					if (i == explosion->getBoxes().size() - 1) {
						return true;
					}
				}
			}
		}
		else {
			return true;
		}
	}
	return false;
}

bool Bomb::chainAnimationExplosion(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RenderWindow& window)
{
	if (m_checkBoxToDestroy) {
		this->explosion->updateBox();
		this->explosion->CheckBoxToDestroy(map_sketch, m_position);
		m_checkBoxToDestroy = false;
	}
	if (this->animation()) {
		map_sketch[this->getPosition().y / 16][this->getPosition().x / 16] = '.';
		return true;
	}
	else {
		this->draw(window);
		this->explosion->RestartClock();
		for (int i = 0; i < this->explosion->getBoxes().size(); i++) {
			this->explosion->getBoxes()[i]->getClock().restart();
		}
	}
	return false;
}

void Bomb::update(sf::RectangleShape rect)
{
	int x = floor(rect.getPosition().x / 16)*16;
	int y = floor(rect.getPosition().y / 16)*16;
	m_sprite.setPosition(x, y);
	m_position = { short(x) , short(y) };
}

void Bomb::updateItems(int index)
{
	delete items[index];
	items.erase(items.begin()+index);
}

void Bomb::loadBoxesToDestroy(std::array<std::string, MAP_HEIGHT>& map_sketch)
{
	explosion->CheckBoxToDestroy(map_sketch, m_position);
}

void Bomb::removeBomb()
{
	m_sprite.setPosition(-64, -64);
}




vector<Item*> Bomb::getItems() const
{
    return items;
}

void Bomb::setItems(vector<Item*> items)
{
    this->items = items;
}

int Bomb::getChanceToPlace() const
{
    return ChanceToPlace;
}

void Bomb::setChanceToPlace(int ChanceToPlace)
{
    this->ChanceToPlace = ChanceToPlace;
}

