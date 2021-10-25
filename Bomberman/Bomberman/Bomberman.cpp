// Bomberman.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <fstream>
#include <array>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h>


#include <SFML/Graphics.hpp>
#include "Global.h"
#include "BombermanPlayer.h"
#include "Map.h"
#include "PathFinding.h"
#include "Bomb.h"
#include "Enemy.h"
#include "Explosion.h"
#include "Box.h"
#include "Item.h"
#include "Menu.h"
#include "Bar.h"


sf::RenderWindow window;

bool isPlayerDead = false;
bool isIADead = false;
bool isEnemy1Dead = false;
bool isEnemy2Dead = false;
bool step1 = false;
bool step2 = false;
int actualMap = 0;

BombermanPlayer bomberman;
Enemy IA(Ia, Down,sf::Vector2f(13 * CELL_SIZE, 10 * CELL_SIZE), "IA.png", sf::IntRect(0,0,CELL_SIZE,24), sf::IntRect(0, 24, CELL_SIZE, 24), sf::IntRect(0, 24*2, CELL_SIZE, 24), sf::IntRect(0, 24*3, CELL_SIZE, 24));
Enemy enemy1(Heli, Down, sf::Vector2f(5 * CELL_SIZE, 4 * CELL_SIZE), "Enemy1.png" , sf::IntRect(0, 0, CELL_SIZE, 24), sf::IntRect(0, 24 * 3, CELL_SIZE, 24), sf::IntRect(0, 24 * 2, CELL_SIZE , 24), sf::IntRect(0, 24, CELL_SIZE, 24));
Enemy enemy2(Heli,Right, sf::Vector2f(11 * CELL_SIZE, 2 * CELL_SIZE), "Enemy1.png", sf::IntRect(0, 0, CELL_SIZE, 24), sf::IntRect(0, 24 * 3, CELL_SIZE, 24), sf::IntRect(0, 24 * 2, CELL_SIZE, 24), sf::IntRect(0, 24, CELL_SIZE, 24));
Map mapM;
Explosion explosion;
Box box;
Bar bar;

sf::SoundBuffer buffer;
sf::Sound sound;

Select selection = History;
int nbreBombPoser = 0;
vector<int> bombs;

bool EnemyTouchByExplosion(Enemy& enemy, BombermanPlayer& b, int index, Bar& add) {
    
    if (b.getBombes()[index]->getExplosion()->IsPlayerHasTouch(enemy.getSprite()) ) {
        add.add100Point();
        enemy.getClock().restart();
        return true;
    }
    return false;
}

void updateMap(std::array<std::string, MAP_HEIGHT>& map_sketch) {
    ifstream ifs("map" + to_string(actualMap) + ".txt");
    string content((istreambuf_iterator<char>(ifs)), (istreambuf_iterator<char>()));
    auto exploded = mapM.explode(content, ',');
    for (unsigned int i = 0; i < exploded.size(); i++) {
        map_sketch[i] = { exploded[i] };
    }
}

void loadSound(string chemin) {
    buffer.loadFromFile(chemin);
    sound.setBuffer(buffer);
    sound.play();
}

int main()
{
    window.create(sf::VideoMode(27 * CELL_SIZE, 15 * CELL_SIZE), "Bomberman", sf::Style::Close);
    Menu menu(window.getSize().x, window.getSize().y, actualMap);
    //sf::View view(sf::FloatRect(0.f, 0.f, 15*CELL_SIZE, 15 * CELL_SIZE));

    //view.setCenter(bomberman.getSprite().getPosition().x, bomberman.getSprite().getPosition().y);
    // on l'active

    // on dessine quelque chose dans cette vue
    sf::Texture textureTeleporteur;
    textureTeleporteur.loadFromFile("teleporteur.png");
    sf::Sprite spriteTeleporteur(textureTeleporteur);
    spriteTeleporteur.setTextureRect(sf::IntRect(0, 0, CELL_SIZE, CELL_SIZE));
    spriteTeleporteur.setPosition(22 * CELL_SIZE, 11 * CELL_SIZE);
    std::array<std::string, MAP_HEIGHT> map_sketch;
    updateMap(map_sketch);
    srand(time(0));
    loadSound("Bomberman_story.wav");
    
    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                // fenêtre fermée
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyReleased:
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;

                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;
                case sf::Keyboard::Escape:
                    loadSound("Bomberman_Title_Screen.wav");
                    selection = Other;
                    break;
                case sf::Keyboard::Enter:
                    if (menu.getSelectedItemIndex() == 0) {
                        selection = Level;
                        clock.restart();
                    }
                    else if (menu.getSelectedItemIndex() == 2) {
                        selection = Exit;
                    }
                    else if (menu.getSelectedItemIndex() == 1) {
                        selection = Option;
                    }
                    break;
                case sf::Keyboard::Space:
                    if (nbreBombPoser < bomberman.getNbreBomb()) {
                        bombs.push_back(nbreBombPoser);
                        nbreBombPoser += 1;
                        bomberman.getBombes()[nbreBombPoser - 1]->setCheckBoxToDestroy(true);
                        bomberman.getBombes()[nbreBombPoser - 1]->getExplosion()->removeFlame();
                        bomberman.getBombes()[nbreBombPoser - 1]->getMinuteur().restart();
                        bomberman.dropBomb(map_sketch, nbreBombPoser - 1);
                        clock.restart();
                    }
                    break;
                default:
                    break;
                }
                // touche pressée
            case sf::Event::KeyPressed:
                switch (event.key.code) {
                }
                break;

                // on ne traite pas les autres types d'évènements
            default:
                break;
            }
        }
        if (selection == Level) {
            if (actualMap < 3) {
                menu.drawLevel(window);
                if (clock.getElapsedTime().asSeconds() > 3) {
                    actualMap++;
                    menu.setCurrentLevel(actualMap);
                    menu.updateLevelStep();
                    updateMap(map_sketch);
                    bomberman.getSprite().setPosition(16, 32);
                    IA.setMspritePos(sf::Vector2f(13 * CELL_SIZE, 10 * CELL_SIZE));
                    IA.updatePositionSprite();
                    enemy1.setMspritePos(sf::Vector2f(5 * CELL_SIZE, 4 * CELL_SIZE));
                    enemy1.updatePositionSprite();
                    enemy2.setMspritePos(sf::Vector2f(11 * CELL_SIZE, 2 * CELL_SIZE));
                    enemy2.updatePositionSprite();
                    isIADead = false;
                    isEnemy1Dead = false;
                    isEnemy2Dead = false;
                    loadSound("Bomberman_Battle_Theme_1.wav");
                    selection = Play;
                }
            }
                else {
                    selection = Win;
                }
        }
        if (selection == Play) {
            bomberman.updateHitBoxPosition();
            IA.updatePositionHitBox();
            enemy1.updatePositionHitBox();
            enemy2.updatePositionHitBox();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                if (!isPlayerDead) {
                    bomberman.animation(Down);
                    if (bomberman.collisionRock(map_sketch, Down) && bomberman.collisionBomb(map_sketch, Down) && bomberman.collisionBox(map_sketch, Down)) {
                        bomberman.move(Down);
                        //view.move(0.f, 2.f);
                    }
                }
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                if (!isPlayerDead) {
                    bomberman.animation(Left);
                    if (bomberman.collisionRock(map_sketch, Left) && bomberman.collisionBomb(map_sketch, Left) && bomberman.collisionBox(map_sketch, Left)) {
                        bomberman.move(Left);
                        //view.move(-2.f, 0.f);
                    }
                }
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                if (!isPlayerDead) {
                    bomberman.animation(Right);
                    if (bomberman.collisionRock(map_sketch, Right) && bomberman.collisionBomb(map_sketch, Right) && bomberman.collisionBox(map_sketch, Right)) {
                        bomberman.move(Right);
                        //view.move(2.f, 0.f);
                    }
                }

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                if (!isPlayerDead) {
                    bomberman.animation(Up);
                    if (bomberman.collisionRock(map_sketch, Up) && bomberman.collisionBomb(map_sketch, Up) && bomberman.collisionBox(map_sketch, Up)) {
                        bomberman.move(Up);
                        //view.move(0.f, -2.f);
                    }
                }
            }
            else {}
            window.draw(spriteTeleporteur);
            mapM.drawMap(map_sketch, window);
            if (bombs.size() != 0) {
                for (int i = 0; i < bombs.size(); i++) {
                    if (!isIADead) {
                        isIADead = EnemyTouchByExplosion(IA, bomberman, bombs[i], bar);
                    }
                    if (!isEnemy1Dead) {
                        isEnemy1Dead = EnemyTouchByExplosion(enemy1, bomberman, bombs[i], bar);
                    }
                    if (!isEnemy2Dead) {
                        isEnemy2Dead = EnemyTouchByExplosion(enemy2, bomberman, bombs[i], bar);
                    }
                    if (bomberman.getBombes()[bombs[i]]->getExplosion()->IsPlayerHasTouch(bomberman.getSprite())) {
                        bomberman.getClock().restart();
                        isPlayerDead = true;
                    }
                    if (bomberman.getBombes()[bombs[i]]->explode(map_sketch, window, bomberman.getBombes()[bombs[i]]->chainAnimationExplosion(map_sketch, window))) {
                        step1 = true;
                    }
                    if (bomberman.getBombes()[bombs[i]]->destructBox(map_sketch, window, bomberman.getBombes()[bombs[i]]->chainAnimationExplosion(map_sketch, window))) {
                        step2 = true;
                    }
                    if (step1 && step2) {
                        bombs.erase(bombs.begin());
                        nbreBombPoser--;
                        step1 = false;
                        step2 = false;
                    }
                    }
                }
            if (IA.getDamage(bomberman.getHitBox()) || enemy1.getDamage(bomberman.getHitBox()) || enemy2.getDamage(bomberman.getHitBox())) {
                isPlayerDead = true;
            }
            if (isPlayerDead) {
                if (bomberman.IsDead(Death)) {
                    if (bomberman.getLife() == 0) {
                        selection = GameOver;
                    }
                    bar.changeNumberOflife();
                    isPlayerDead = false;
                    bomberman.getSprite().setPosition(16, 48);
                    //view.setCenter(16, 48);
                }
            }
            for (int i = 0; i < bomberman.getBombes().size(); i++) {
                if (bomberman.getBombes()[i]->getItems().size() != 0) {
                    for (int j = 0; j < bomberman.getBombes()[i]->getItems().size(); j++) {
                        if (bomberman.pickUpItem(bomberman.getBombes()[i]->getItems()[j])) {
                            bomberman.getBombes()[i]->updateItems(j);
                        }
                    }
                }
                if (bomberman.getBombes()[i]->getItems().size() != 0) {
                    for (int j = 0; j < bomberman.getBombes()[i]->getItems().size(); j++) {
                        bomberman.getBombes()[i]->getItems()[j]->draw(window);
                    }
                }
            }
            if (isIADead) {
                IA.IsDead(Death);
            }
            else {
                IA.randomMovement(map_sketch, bomberman.getBombes());
            }
            if (isEnemy1Dead) {
                enemy1.IsDead(Death);
            }
            else {
                enemy1.classicMovmentUpDown(map_sketch, bomberman.getBombes());
            }
            if (isEnemy2Dead) {
                enemy2.IsDead(Death);
            }
            else {
                enemy2.classicMovmentRightLeft(map_sketch, bomberman.getBombes());
            }
            if (spriteTeleporteur.getGlobalBounds().intersects(bomberman.getSprite().getGlobalBounds()) && isIADead && isEnemy1Dead && isEnemy2Dead) {
                clock.restart();
                selection = Level;
            }
            
            IA.draw(window);
            enemy1.draw(window);
            enemy2.draw(window);
            bomberman.draw(window);
            bar.draw(window);
            //window.setView(view);
        }
        if (selection == Other) {
            menu.drawBackground(window);
            menu.draw(window);
        }
        if (selection == Option) {
            menu.drawOption(window);
        }
        if (selection == History) {
            if (menu.endOfMenu()) {
                loadSound("Bomberman_Title_Screen.wav");
                selection = Other;
            }
            menu.MoveHistory();
            menu.drawHistory(window);
        }
        if (selection == Exit) {
            window.close();
        }
        if (selection == GameOver) {
            menu.drawGameOver(window);
        }
        if (selection == Win) {
            menu.drawWin(window);
        }

        window.display();
        window.clear();
    }
    return EXIT_SUCCESS;

}