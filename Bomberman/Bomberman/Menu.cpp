#include "Menu.h"

Menu::Menu(float width, float height, int currentLevel)
{
	if (!font.loadFromFile("LomoCopy-LT-Std-Black_28684.ttf")) {

	}
	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Red);
	menu[0].setString("Play");
	menu[0].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("Options");
	menu[1].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("Exit");
	menu[2].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

	gameOver.setFont(font);
	gameOver.setFillColor(sf::Color::Red);
	gameOver.setString("Game Over");
	gameOver.setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	win.setFont(font);
	win.setFillColor(sf::Color::Blue);
	win.setString("Win");
	win.setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	backgroundTexture.loadFromFile("Super_Bomberman_front.png");
	backgroundSprite.setTexture(backgroundTexture);
	backgroundSprite.setScale(0.3375, 0.334);

	optionTexture.loadFromFile("option2.png");
	optionSprite.setTexture(optionTexture);
	optionSprite.setScale(0.5, 0.5);
	optionSprite.setPosition(4 * CELL_SIZE, CELL_SIZE);

	option[0].setFont(font);
	option[0].setFillColor(sf::Color::Yellow);
	option[0].setString("Plant a bomb");
	option[0].setScale(0.5, 0.5);
	option[0].setPosition(sf::Vector2f(4 * CELL_SIZE / 2, 11 * CELL_SIZE));

	option[1].setFont(font);
	option[1].setFillColor(sf::Color::Yellow);
	option[1].setString("Movement");
	option[1].setScale(0.5, 0.5);
	option[1].setPosition(sf::Vector2f(29 * CELL_SIZE / 2, 11 * CELL_SIZE));

	history.setFont(font);
	history.setFillColor(sf::Color::White);
	history.setScale(0.4, 0.4);
	history.setString("La fratrie Bomberman protectrice \n de l'univers doit faire face \n a l'empereur malefique Buggler et \n ses fideles Bomber-vilains. \n Nos heros devront traverser plusieurs \n mondes aussi differents que dangereux \n, et affronter les cinq Bomber-vilains  \n lors de combats de boss epiques.");
	history.setPosition(sf::Vector2f(CELL_SIZE, 13 * CELL_SIZE));

	this->currentLevel = currentLevel;
	levelStep.setFont(font);
	levelStep.setFillColor(sf::Color::White);
	levelStep.setScale(0.4, 0.4);
	levelStep.setString("Level "+to_string(this->currentLevel));
	levelStep.setPosition(sf::Vector2f(CELL_SIZE, 13 * CELL_SIZE));



	selectedItemIndex = 0;
}

Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++) {
		window.draw(menu[i]);
	}
}

void Menu::drawBackground(sf::RenderWindow& window)
{
	window.draw(backgroundSprite);
}

void Menu::drawGameOver(sf::RenderWindow& window)
{
	window.draw(gameOver);
}

void Menu::drawOption(sf::RenderWindow& window)
{
	window.draw(optionSprite);
	for (int i = 0; i < 2; i++) {
		window.draw(option[i]);
	}
}

void Menu::drawHistory(sf::RenderWindow& window)
{
	window.draw(history);
}

void Menu::drawWin(sf::RenderWindow& window)
{
	window.draw(win);
}

void Menu::drawLevel(sf::RenderWindow& window)
{
	window.draw(levelStep);
}

void Menu::MoveUp()
{
	if (selectedItemIndex -1 >=0) {
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS) {
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void Menu::MoveHistory()
{
	history.move(0, -0.005);
}

bool Menu::endOfMenu()
{
	if (history.getPosition().y < -155) {
		return true;
	}
	return false;
}

int Menu::getSelectedItemIndex() const
{
    return selectedItemIndex;
}

void Menu::setSelectedItemIndex(int selectedItemIndex)
{
    this->selectedItemIndex = selectedItemIndex;
}

int Menu::getCurrentLevel()
{
	return currentLevel;
}

void Menu::setCurrentLevel(int currentLevel)
{
	this->currentLevel = currentLevel;
}

sf::Font Menu::getFont() const
{
    return font;
}

void Menu::setFont(sf::Font font)
{
    this->font = font;
}

void Menu::updateLevelStep()
{
	levelStep.setString("Level " + to_string(this->currentLevel));
}


sf::Text Menu::getGameOver() const
{
    return gameOver;
}

void Menu::setGameOver(sf::Text gameOver)
{
    this->gameOver = gameOver;
}

sf::Text Menu::getWin() const
{
    return win;
}

void Menu::setWin(sf::Text win)
{
    this->win = win;
}

sf::Texture Menu::getBackgroundTexture() const
{
    return backgroundTexture;
}

void Menu::setBackgroundTexture(sf::Texture backgroundTexture)
{
    this->backgroundTexture = backgroundTexture;
}

sf::Sprite Menu::getBackgroundSprite() const
{
    return backgroundSprite;
}

void Menu::setBackgroundSprite(sf::Sprite backgroundSprite)
{
    this->backgroundSprite = backgroundSprite;
}

sf::Texture Menu::getOptionTexture() const
{
    return optionTexture;
}

void Menu::setOptionTexture(sf::Texture optionTexture)
{
    this->optionTexture = optionTexture;
}

sf::Sprite Menu::getOptionSprite() const
{
    return optionSprite;
}

void Menu::setOptionSprite(sf::Sprite optionSprite)
{
    this->optionSprite = optionSprite;
}



