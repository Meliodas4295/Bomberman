#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Global.h"

#define MAX_NUMBER_OF_ITEMS 3
class Menu
{
public:
	Menu(float width, float height, int currentLevel);
	~Menu();

	/*sf::Text getMenu() const;
	void setMenu(sf::Text menu);*/

	sf::Text getGameOver() const;
	void setGameOver(sf::Text gameOver);

	sf::Text getWin() const;
	void setWin(sf::Text win);

	sf::Texture getBackgroundTexture() const;
	void setBackgroundTexture(sf::Texture backgroundTexture);

	sf::Sprite getBackgroundSprite() const;
	void setBackgroundSprite(sf::Sprite backgroundSprite);

	sf::Texture getOptionTexture() const;
	void setOptionTexture(sf::Texture optionTexture);

	sf::Sprite getOptionSprite() const;
	void setOptionSprite(sf::Sprite optionSprite);

	/*sf::Text getOption() const;
	void setOption(sf::Text option);*/


	void draw(sf::RenderWindow& window);
	void drawBackground(sf::RenderWindow& window);
	void drawGameOver(sf::RenderWindow& window);
	void drawOption(sf::RenderWindow& window);
	void drawHistory(sf::RenderWindow& window);
	void drawWin(sf::RenderWindow& window);
	void drawLevel(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();
	void MoveHistory();
	bool endOfMenu();

	int getSelectedItemIndex() const;
	void setSelectedItemIndex(int selectedItemIndex);

	int getCurrentLevel();
	void setCurrentLevel(int currentLevel);

	sf::Font getFont() const;
	void setFont(sf::Font font);

	void updateLevelStep();

	/*sf::Text getMenu() const;
	void setMenu(sf::Text menu);*/

private:
	int selectedItemIndex;
	int currentLevel;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
	sf::Text gameOver;
	sf::Text win;
	sf::Texture backgroundTexture;
	sf::Sprite backgroundSprite;
	sf::Texture optionTexture;
	sf::Sprite optionSprite;
	sf::Text option[2];
	sf::Text history;
	sf::Text levelStep;
};

