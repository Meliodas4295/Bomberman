// Bomberman.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
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


sf::RenderWindow window;
sf::Texture texture;
sf::Sprite sprite;
bool IsBomb = false;
bool IsExplode = false;
int c = 17;
int compteur = 0;
BombermanPlayer bomberman;
Enemy e;
Map mapM;
Explosion explosion;
sf::IntRect rectSourceSpriteDown(3 * 17, 34, CELL_SIZE, CELL_SIZE * 2);
sf::IntRect rectSourceSpriteLeft(6 * 17 + 4, 34, CELL_SIZE, CELL_SIZE * 2);
sf::IntRect rectSourceSpriteRight(9 * 17 + 8, 34, CELL_SIZE, CELL_SIZE * 2);
sf::IntRect rectSourceSpriteUp(12 * 17 + 14, 34, CELL_SIZE, CELL_SIZE * 2);
sf::IntRect rectSourceSpriteDownE(3 * 17, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
sf::IntRect rectSourceSpriteLeftE(6 * 17 + 4, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
sf::IntRect rectSourceSpriteRightE(9 * 17 + 8, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
sf::IntRect rectSourceSpriteUpE(12 * 17 + 14, 62, CELL_SIZE, (CELL_SIZE * 2) - 2);
vector<Bomb*> BH;
Position p;
int x;
int y;

int main()
{
    window.create(sf::VideoMode(18*16,13*16), "Pac-Man", sf::Style::Close);
    texture.loadFromFile("15bomberman.png");
    sf::Sprite bomb = bomberman.getSprite();
    bomb.setTexture(texture);
    bomb.setTextureRect(bomberman.getRectSourceSpriteDown());
    bomb.setPosition(sf::Vector2f(16, 16));

    sf::Sprite enemy(texture);
    enemy.setTextureRect(rectSourceSpriteDownE);
    enemy.setPosition(sf::Vector2f(13*CELL_SIZE, 10*CELL_SIZE));

    /*sf::Sprite explosion(texture);
    explosion.setTextureRect(sf::IntRect(9 * 17 , 260, 5 * CELL_SIZE, 5 * CELL_SIZE));*/

    sf::RectangleShape rect;
    rect.setSize(sf::Vector2f(12, 8));
    rect.setFillColor(sf::Color::Black);

    sf::RectangleShape rectE;
    rectE.setSize(sf::Vector2f(12, 8));
    rectE.setFillColor(sf::Color::Black);

    sf::RectangleShape test;
    test.setSize(sf::Vector2f(16, 16));
    test.setFillColor(sf::Color::Black);

    srand(time(0));

    sf::Clock clock;
    sf::Clock clock2;
    sf::Clock clock3;
    sf::Clock clock4;
    sf::Clock clock5;


    std::array<std::string, MAP_HEIGHT> map_sketch = {
        "###############",
        "#-----====----#",
        "#.#.#.#=#=#.#.#",
        "#.......===...#",
        "#.#.#.#.#=#.#.#",
        "#.............#",
        "#.#.#.#.#.#.#.#",
        "#.............#",
        "#.#.#.#.#.#.#.#",
        "#.............#",
        "#.#.#.#.#.#.#.#",
        "#.............#",
        "###############"
    };

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

                // touche pressée
            case sf::Event::KeyPressed:
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                    if (BH.size() < 1) {
                        BH.push_back(new Bomb(sf::IntRect(17, 258, CELL_SIZE, CELL_SIZE), { short(floor(((rect.getPosition().x - 1) + 6) / 16) * 16), short(floor(((rect.getPosition().y - 2) + 4) / 16) * 16) }));
                        p.x = short(floor(((rect.getPosition().x - 1)+6) / 16) * 16);
                        p.y = short(floor(((rect.getPosition().y - 2)+4) / 16) * 16);
                        IsBomb = true;
                    }
                }
                break;

                // on ne traite pas les autres types d'évènements
            default:
                break;
            }
        }
        mapM.drawMap(map_sketch, bomberman, window);
        rect.setPosition(sf::Vector2f(bomb.getPosition().x + 3, bomb.getPosition().y + 20));
        rectE.setPosition(sf::Vector2f(enemy.getPosition().x + 3, enemy.getPosition().y + 20));
        test.setPosition(sf::Vector2f(p.x, p.y));
        e.randomMovement(map_sketch, rectE, enemy, clock2);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            bomb = bomberman.animation(clock, rectSourceSpriteDown, bomb, Down);
            if (bomberman.collisionRock(map_sketch, rect, Down) && bomberman.collisionBomb(map_sketch, rect, Down) && bomberman.collisionBox(map_sketch, rect, Down)) {
                bomb.move(0, 1);
            }

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            bomb = bomberman.animation(clock, rectSourceSpriteLeft, bomb, Left);
            if (bomberman.collisionRock(map_sketch, rect, Left) && bomberman.collisionBomb(map_sketch, rect, Left) && bomberman.collisionBox(map_sketch, rect, Left)) {
                bomb.move(-1, 0);
            }
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            bomb = bomberman.animation(clock, rectSourceSpriteRight, bomb, Right);
            if (bomberman.collisionRock(map_sketch, rect, Right) && bomberman.collisionBomb(map_sketch, rect, Right) && bomberman.collisionBox(map_sketch, rect, Right)) {
                bomb.move(1, 0);
            }

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            bomb = bomberman.animation(clock, rectSourceSpriteUp, bomb, Up);
            if (bomberman.collisionRock(map_sketch, rect, Up) && bomberman.collisionBomb(map_sketch, rect, Up) && bomberman.collisionBox(map_sketch, rect, Up)) {
                bomb.move(0, -1);
            }

        }
        else {
            rectSourceSpriteDown.left = 4 * 17;
            bomb.setTextureRect(rectSourceSpriteDown);
        }
        if (BH.size() != 0) {
            BH[0]->animation(clock3, window);
            if (BH[0]->getCompteur() == 10) {
                delete BH[0];
                BH.erase(BH.begin());
                IsExplode = true;
                map_sketch[floor((p.y) / 16)][floor((p.x) / 16)] = '.';
            }
   
        }
        if (IsBomb) {
            for (int i = 0; i < BH.size(); i++) {
                BH[i]->draw(window);
                map_sketch[floor((p.y)/16)][floor((p.x) / 16)] = 'o';

            }
        }
        if (IsExplode) {
            explosion.frameworkExplosion(map_sketch, p, window, clock4);
            //cout << explosion.getMfirstDownExplosion()[2].getPosition().x / 16 << "   ;   " << explosion.getMfirstDownExplosion()[2].getPosition().x / 16 << endl;
            explosion.destroyBox(map_sketch, p, clock5, window);
            if (clock4.getElapsedTime().asSeconds() > 0.5f){
                IsExplode = false;
                /*p.x = 0;
                p.y = 0;*/
            }
        }
        window.draw(bomb);
        window.draw(enemy);
        //window.draw(explosion.getMdestroyBox());
        window.display();
        window.clear();
    }

}






