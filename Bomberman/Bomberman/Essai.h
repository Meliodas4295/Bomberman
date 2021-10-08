#pragma once

/*if (clock.getElapsedTime().asSeconds() > 0.2f) {
                if (rectSourceSpriteDown.left == 5 * 17)
                    rectSourceSpriteDown.left = 3 * 17;
                else
                    rectSourceSpriteDown.left += 17;

                bomb.setTextureRect(rectSourceSpriteDown);
                clock.restart();
            }
 if (clock.getElapsedTime().asSeconds() > 0.2f) {

                if (rectSourceSpriteLeft.left == 8 * 17 + 4)
                    rectSourceSpriteLeft.left = 6 * 17 + 4;
                else
                    rectSourceSpriteLeft.left += 17;

                    bomb.setTextureRect(rectSourceSpriteLeft);
                    clock.restart();
            }
if (clock.getElapsedTime().asSeconds() > 0.2f) {

    if (rectSourceSpriteRight.left == 11 * 17 + 8)
        rectSourceSpriteRight.left = 9 * 17 + 8;
    else
        rectSourceSpriteRight.left += 17;

    bomb.setTextureRect(rectSourceSpriteRight);
    clock.restart();
            }
if (clock.getElapsedTime().asSeconds() > 0.2f) {

                if (rectSourceSpriteUp.left == 14 * 17 + 14)
                    rectSourceSpriteUp.left = 12 * 17 + 14;
                else
                    rectSourceSpriteUp.left += 17;

                bomb.setTextureRect(rectSourceSpriteUp);
                clock.restart();
            }*/

            //sf::Sprite animation(sf::Clock &clock, sf::IntRect rect, sf::Sprite bomb) {
            //    if (clock.getElapsedTime().asSeconds() > 0.2f) {
            //        if (rectSourceSpriteDown.left == 5 * 17)
            //            rectSourceSpriteDown.left = 3 * 17;
            //        else
            //            rectSourceSpriteDown.left += 17;
            //
            //        bomb.setTextureRect(rectSourceSpriteDown);
            //        clock.restart();
            //    }
            //    return bomb;
            //}

            /*for (int i = 0; i < rects.size(); i++) {
                        if (rect.getGlobalBounds().intersects(rects[i].getGlobalBounds()) && sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                            collisionOkDown = true;
                            cout << rect.getLocalBounds().intersects(rects[i].getGlobalBounds()) << endl;
                        }
                        if (rect.getGlobalBounds().intersects(rects[i].getGlobalBounds()) && sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                            collisionOkLeft = true;
                            cout << rect.getLocalBounds().intersects(rects[i].getGlobalBounds()) << endl;
                        }
                        if (rect.getGlobalBounds().intersects(rects[i].getGlobalBounds()) && sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                            collisionOkRight = true;
                            cout << rect.getLocalBounds().intersects(rects[i].getGlobalBounds()) << endl;
                        }
                        if (rect.getGlobalBounds().intersects(rects[i].getGlobalBounds()) && sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                            collisionOkUp = true;
                            cout << rect.getLocalBounds().intersects(rects[i].getGlobalBounds()) << endl;
                        }
                    }*/

                    /*for (int i = 0; i < rects.size(); i++) {
                                    if (bomb.getGlobalBounds().intersects(rects[i].getGlobalBounds())) {
                                        collisionOk = true;
                                        cout << bomb.getLocalBounds().intersects(rects[i].getGlobalBounds()) << endl;
                                    }
                                }*/
                                /*if (bomb.getGlobalBounds().intersects(rect.getGlobalBounds()))
                                    cout << bomb.getLocalBounds().intersects(rect.getGlobalBounds()) << endl;*/



                                    //for (int a = 0; a < MAP_WIDTH; a++) {
                                    //    for (int b = 0; b < MAP_HEIGHT; b++) {
                                    //        if (map_sketch[b][a] == '#') {
                                    //            /*sf::VertexArray quad(sf::Quads, 4);
                                    //            quad[0].position = sf::Vector2f((CELL_SIZE * a), (CELL_SIZE * b));
                                    //            quad[1].position = sf::Vector2f(CELL_SIZE * (1+a), (CELL_SIZE * b));
                                    //            quad[2].position = sf::Vector2f(CELL_SIZE * (1+a), CELL_SIZE * (1+b));
                                    //            quad[3].position = sf::Vector2f((CELL_SIZE * a), CELL_SIZE * (1+b));
                                    //            quads.push_back(quad);*/
                                    //            sf::RectangleShape rect;
                                    //            rect.setSize(sf::Vector2f(16, 16));
                                    //            rect.setFillColor(sf::Color::Black);
                                    //            rect.setPosition(sf::Vector2f((CELL_SIZE * a), (CELL_SIZE * b)));
                                    //
                                    //            rects.push_back(rect);
                                    //        }
                                    //    }
                                    //}



                                    /*if (BH.size() != 0) {
                                                if (clock.getElapsedTime().asSeconds() > 0.2f) {
                                                    cout << BH[0]->getRect().left << endl;
                                                    if (BH[0]->getRect().left == 3 * 17) {
                                                        delete BH[0];
                                                        BH.erase(BH.begin());
                                                        BH.insert(BH.begin(), new Bomb(sf::IntRect(17, 258, CELL_SIZE, CELL_SIZE), { p.x, p.y }));
                                                        c = 0;
                                                    }
                                                    else {
                                                        c += 17;
                                                        delete BH[0];
                                                        BH.erase(BH.begin());
                                                        BH.insert(BH.begin(), new Bomb(sf::IntRect(c, 258, CELL_SIZE, CELL_SIZE), { p.x, p.y }));
                                                    }

                                                    BH[0]->draw(window);
                                                    clock.restart();
                                                }
                                            }*/

                                            /*pos2 = sf::Vector2i(rect.getPosition().x + 12, rect.getPosition().y + 8);
                                                    hx = floor(rect.getPosition().x / CELL_SIZE);
                                                    hy = floor(rect.getPosition().y / CELL_SIZE);
                                                    hx2 = floor(pos2.x / CELL_SIZE);
                                                    hy2 = floor(pos2.y / CELL_SIZE);*/

                                                    //int hx;
                                                    //int hy;
                                                    //int hx2;
                                                    //int hy2;
                                                    //sf::Vector2i pos2;



                                    // Source is the left-most bottom-most corner
                                            //v = pathFinding.aStarSearch(grid, src, dest);
                                            //cout << floor(enemy.getPosition().x / CELL_SIZE) << "  ;  " << floor(enemy.getPosition().y / CELL_SIZE) << endl;

                                            /*for (int i = 0; i < v.size(); i++) {
                                                if (!v.empty()) {
                                                    if (floor(enemy.getPosition().x / CELL_SIZE) > v[i].first ) {
                                                        parcours.push_back(Left);

                                                    }
                                                    if (floor(enemy.getPosition().x / CELL_SIZE) < v[i].first ) {
                                                        parcours.push_back(Right);
                                                    }
                                                    if (floor(enemy.getPosition().y / CELL_SIZE) > v[i].second ) {
                                                        parcours.push_back(Down);
                                                    }
                                                    if (floor(enemy.getPosition().y / CELL_SIZE) < v[i].second ) {
                                                        parcours.push_back(Up);
                                                    }
                                                }
                                            }
                                            for (int i = 0; i < parcours.size(); i++)
                                                if (parcours[i] == Left) {
                                                    enemy.move(-0.0005, 0);
                                                }*/

                                                //void enemyDirection(int& v1, sf::Sprite& enemy, std::array<std::string, MAP_HEIGHT> map_sketch, sf::RectangleShape& rectE) {
                                                //    if (DirPossible[v1] == Down && !(map_sketch[floor((rectE.getPosition().y + 12) / CELL_SIZE)][hxE] == '#') && !(map_sketch[floor((rectE.getPosition().y + 12) / CELL_SIZE)][hxE2] == '#')) {
                                                //        enemy.move(0, 0.5);
                                                //        if (enemy.getPosition().y == positionBeforeMove[1] + 32) {
                                                //            collisionOkDown = true;
                                                //            collisionOkUp = true;
                                                //            collisionOkRight = true;
                                                //            collisionOkLeft = true;
                                                //            calculRandomDir = true;
                                                //        }
                                                //    }
                                                //    else if (DirPossible[v1] == Left && !(map_sketch[hyE][floor((rectE.getPosition().x - 4) / CELL_SIZE)] == '#') && !(map_sketch[hyE2][floor((rectE.getPosition().x - 4) / CELL_SIZE)] == '#')) {
                                                //        enemy.move(-0.5, 0);
                                                //        if (enemy.getPosition().x == positionBeforeMove[0] - 32) {
                                                //            collisionOkDown = true;
                                                //            collisionOkUp = true;
                                                //            collisionOkRight = true;
                                                //            collisionOkLeft = true;
                                                //            calculRandomDir = true;
                                                //        }
                                                //    }
                                                //    else if (DirPossible[v1] == Right && !(map_sketch[hyE][floor((rectE.getPosition().x + 13) / CELL_SIZE)] == '#') && !(map_sketch[hyE2][floor((rectE.getPosition().x + 13) / CELL_SIZE)] == '#')) {
                                                //        enemy.move(0.5, 0);
                                                //        if (enemy.getPosition().x == positionBeforeMove[0] + 32) {
                                                //            collisionOkDown = true;
                                                //            collisionOkUp = true;
                                                //            collisionOkRight = true;
                                                //            collisionOkLeft = true;
                                                //            calculRandomDir = true;
                                                //        }
                                                //    }
                                                //    else if (DirPossible[v1] == Up && !(map_sketch[floor((rectE.getPosition().y - 4) / CELL_SIZE)][hxE] == '#') && !(map_sketch[floor((rectE.getPosition().y - 4) / CELL_SIZE)][hxE2] == '#')) {
                                                //        enemy.move(0, -0.5);
                                                //        if (enemy.getPosition().y == positionBeforeMove[1] - 32) {
                                                //            collisionOkDown = true;
                                                //            collisionOkUp = true;
                                                //            collisionOkRight = true;
                                                //            collisionOkLeft = true;
                                                //            calculRandomDir = true;
                                                //        }
                                                //    }
                                                //    else {
                                                //        collisionOkDown = true;
                                                //        collisionOkUp = true;
                                                //        collisionOkRight = true;
                                                //        collisionOkLeft = true;
                                                //        calculRandomDir = true;
                                                //    }
                                                //    if (calculRandomDir) {
                                                //        DirPossible.clear();
                                                //    }
                                                //}

                                    /*pos3 = sf::Vector2i(rectE.getPosition().x + 12, rectE.getPosition().y + 8);
                                            hxE = floor(rectE.getPosition().x / CELL_SIZE);
                                            hyE = floor(rectE.getPosition().y / CELL_SIZE);
                                            hxE2 = floor(pos3.x / CELL_SIZE);
                                            hyE2 = floor(pos3.y / CELL_SIZE);

                                            if (!(map_sketch[floor((rectE.getPosition().y + 12) / CELL_SIZE)][hxE] == '#') && !(map_sketch[floor((rectE.getPosition().y + 12) / CELL_SIZE)][hxE2] == '#') && collisionOkDown) {
                                                DirPossible.push_back(Down);
                                                collisionOkDown = false;
                                            }
                                            if (!(map_sketch[hyE][floor((rectE.getPosition().x - 4) / CELL_SIZE)] == '#') && !(map_sketch[hyE2][floor((rectE.getPosition().x - 4) / CELL_SIZE)] == '#') && collisionOkLeft) {
                                                DirPossible.push_back(Left);
                                                collisionOkLeft = false;
                                            }
                                            if (!(map_sketch[hyE][floor((rectE.getPosition().x + 13) / CELL_SIZE)] == '#') && !(map_sketch[hyE2][floor((rectE.getPosition().x + 13) / CELL_SIZE)] == '#') && collisionOkRight) {
                                                DirPossible.push_back(Right);
                                                collisionOkRight = false;
                                            }
                                            if (!(map_sketch[floor((rectE.getPosition().y - 4) / CELL_SIZE)][hxE] == '#') && !(map_sketch[floor((rectE.getPosition().y - 4) / CELL_SIZE)][hxE2] == '#') && collisionOkUp) {
                                                DirPossible.push_back(Up);
                                                collisionOkUp = false;
                                            }
                                            if (calculRandomDir && DirPossible.size() != 0) {
                                                positionBeforeMove[0] = enemy.getPosition().x;
                                                positionBeforeMove[1] = enemy.getPosition().y;
                                                v1 = rand() % DirPossible.size();
                                                cout << rand() % DirPossible.size() << endl;
                                                calculRandomDir = false;
                                            }
                                            switch (DirPossible.size()) {
                                            case 1:
                                                enemyDirection(v1, enemy, map_sketch, rectE);
                                                break;
                                            case 2:
                                                enemyDirection(v1, enemy, map_sketch, rectE);
                                                break;
                                            case 3:
                                                enemyDirection(v1, enemy, map_sketch, rectE);
                                                break;
                                            case 4:
                                                enemyDirection(v1, enemy, map_sketch, rectE);
                                                break;

                                            }*/

                                            //bool collisionOkDown = true;
                                            //bool collisionOkUp = true;
                                            //bool collisionOkRight = true;
                                            //bool collisionOkLeft = true;
                                            //bool calculRandomDir = true;


                                    /* Description of the Grid-
                                         1--> The cell is not blocked
                                         0--> The cell is blocked    */
                                         /*PathFinding pathFinding;
                                         std::vector<pair<int, int>> v;
                                         int grid[ROW][COL]
                                             = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0},
                                                 { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                                                 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
                                         int grid[ROW][COL];

                                         for (int i = 0; i < map_sketch.size(); i++) {
                                             for (int j = 0; j < map_sketch[0].size(); j++) {
                                                 if(map_sketch[i][j] == '#')
                                                     grid[j][i] = 0;
                                                 else
                                                     grid[j][i] = 1;
                                             }
                                         }*/

                                         //std::vector<pair<int, int>> IA(int grid[ROW][COL], sf::Sprite& enemy, sf::RectangleShape& rect, PathFinding& pathFinding) {
                                         //    Pair src = make_pair(floor(enemy.getPosition().x / CELL_SIZE), floor(enemy.getPosition().y / CELL_SIZE));
                                         //
                                         //    Pair dest = make_pair(floor(rect.getPosition().x / CELL_SIZE), floor(rect.getPosition().y / CELL_SIZE));
                                         //
                                         //    return pathFinding.aStarSearch(grid, src, dest);
                                         //}

//void BombermanPlayer::draw(sf::Clock clock,sf::RenderWindow& window)
//{
//	/*sf::Sprite sprite;
//
//	sf::Texture texture;*/
//
//	//m_sprite.setPosition(m_position.x, m_position.y);
//
//	m_texture.loadFromFile("15bomberman.png");
//
//	m_sprite.setTexture(m_texture);
//	m_sprite.setTextureRect(sf::IntRect(3 * 17, 34, CELL_SIZE, CELL_SIZE * 2));
//    /*this->gestionClavier(event);*/
//    //this->animated(clock);
//
//	window.draw(m_sprite);
//}

//void BombermanPlayer::animated(sf::Clock clock)
//{
//    
//
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
//        if (clock.getElapsedTime().asSeconds() > 0.01f) {
//            if (m_rectSourceSpriteDown.left == 5 * 17)
//                m_rectSourceSpriteDown.left = 3 * 17;
//            else
//                m_rectSourceSpriteDown.left += 17;
//
//            m_sprite.setTextureRect(m_rectSourceSpriteDown);
//            clock.restart();
//        }
//        m_sprite.move(0, 1);
//    }
//    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
//        if (clock.getElapsedTime().asSeconds() > 0.01f) {
//            if (m_rectSourceSpriteLeft.left == 8 * 17 + 4)
//                m_rectSourceSpriteLeft.left = 6 * 17 + 4;
//            else
//                m_rectSourceSpriteLeft.left += 17;
//
//            m_sprite.setTextureRect(m_rectSourceSpriteLeft);
//            clock.restart();
//        }
//        m_sprite.move(-1, 0);
//
//    }
//    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
//        if (clock.getElapsedTime().asSeconds() > 0.01f) {
//            if (m_rectSourceSpriteRight.left == 11 * 17 + 8)
//                m_rectSourceSpriteRight.left = 9 * 17 + 8;
//            else
//                m_rectSourceSpriteRight.left += 17;
//
//            m_sprite.setTextureRect(m_rectSourceSpriteRight);
//            clock.restart();
//        }
//        m_sprite.move(1, 0);
//
//    }
//    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
//        if (clock.getElapsedTime().asSeconds() > 0.01f) {
//            if (m_rectSourceSpriteUp.left == 14 * 17 + 14)
//                m_rectSourceSpriteUp.left = 12 * 17 + 14;
//            else
//                m_rectSourceSpriteUp.left += 17;
//
//            m_sprite.setTextureRect(m_rectSourceSpriteUp);
//            clock.restart();
//        }
//        m_sprite.move(0, -1);
//
//    }
//    else {
//        m_rectSourceSpriteDown.left = 4 * 17;
//        m_sprite.setTextureRect(m_rectSourceSpriteDown);
//    }
//    std::cout << "cc 2 : " << clock.getElapsedTime().asSeconds() << std::endl;
//}

//void BombermanPlayer::gestionClavier(sf::Event event)
//{
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
//    {
//        m_sprite.move(0, -1);
//    }
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
//    {
//        m_sprite.move(0, 1);
//    }
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//    {
//        m_sprite.move(1, 0);
//    }
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//    {
//        m_sprite.move(-1, 0);
//    }
//}

//std::vector<int> DirPossible;
//sf::Vector2i pos3;


/*sf::Sprite BombermanPlayer::animationDown(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite)
{
    if (clock.getElapsedTime().asSeconds() > 0.2f) {
        if (rect.left == 5 * 17)
            rect.left = 3 * 17;
        else
            rect.left += 17;

        sprite.setTextureRect(rect);
        clock.restart();
    }
    return sprite;
}

sf::Sprite BombermanPlayer::animationLeft(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite)
{
    if (clock.getElapsedTime().asSeconds() > 0.2f) {

        if (rect.left == 8 * 17 + 4)
            rect.left = 6 * 17 + 4;
        else
            rect.left += 17;

        sprite.setTextureRect(rect);
        clock.restart();
    }
    return sprite;
}

sf::Sprite BombermanPlayer::animationRight(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite)
{
    if (clock.getElapsedTime().asSeconds() > 0.2f) {

        if (rect.left == 11 * 17 + 8)
            rect.left = 9 * 17 + 8;
        else
            rect.left += 17;

        sprite.setTextureRect(rect);
        clock.restart();
    }
    return sprite;
}*/

/*sf::Sprite animationDown(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite);
    sf::Sprite animationLeft(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite);
    sf::Sprite animationRight(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite);
    sf::Sprite animationUp(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite);*/

//sf::Sprite BombermanPlayer::animationUp(sf::Clock& clock, sf::IntRect& rect, sf::Sprite& sprite)
//{
//    if (clock.getElapsedTime().asSeconds() > 0.2f) {
//
//        if (rect.left == 14 * 17 + 14)
//            rect.left = 12 * 17 + 14;
//        else
//            rect.left += 17;
//
//        sprite.setTextureRect(rect);
//        clock.restart();
//    }
//    return sprite;
//}


//bool BombermanPlayer::collisionDown(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
//{
//    this->createCoordonates(rect);
//
//    return !(map_sketch[point3Collision[1]][point1Collision[0]] == '#') && !(map_sketch[point3Collision[1]][point2Collision[0]] == '#');
//}
//
//bool BombermanPlayer::collisionLeft(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
//{
//    this->createCoordonates(rect);
//
//    return !(map_sketch[point1Collision[1]][point3Collision[0]] == '#') && !(map_sketch[point2Collision[1]][point3Collision[0]] == '#');
//}
//
//bool BombermanPlayer::collisionRight(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
//{
//    this->createCoordonates(rect);
//
//    return !(map_sketch[point1Collision[1]][point4Collision[0]] == '#') && !(map_sketch[point2Collision[1]][point4Collision[0]] == '#');
//}
//
//bool BombermanPlayer::collisionUp(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
//{
//    this->createCoordonates(rect);
//
//    return !(map_sketch[point4Collision[1]][point1Collision[0]] == '#') && !(map_sketch[point4Collision[1]][point2Collision[0]] == '#');
//}

/*bool collisionDown(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);
    bool collisionLeft(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);
    bool collisionRight(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);
    bool collisionUp(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);*/


    //bool Enemy::collisionDown(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
    //{
    //	this->createCoordonates(rect);
    //	return !(map_sketch[point3Collision[1]][point1Collision[0]] == '#') && !(map_sketch[point3Collision[1]][point2Collision[0]] == '#');
    //}
    //
    //bool Enemy::collisionLeft(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
    //{
    //	this->createCoordonates(rect);
    //	return !(map_sketch[point1Collision[1]][point3Collision[0]] == '#') && !(map_sketch[point2Collision[1]][point3Collision[0]] == '#');
    //}
    //
    //bool Enemy::collisionRight(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
    //{
    //	this->createCoordonates(rect);
    //	return !(map_sketch[point1Collision[1]][point4Collision[0]] == '#') && !(map_sketch[point2Collision[1]][point4Collision[0]] == '#');
    //}
    //
    //bool Enemy::collisionUp(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect)
    //{
    //	this->createCoordonates(rect);
    //	return !(map_sketch[point4Collision[1]][point1Collision[0]] == '#') && !(map_sketch[point4Collision[1]][point2Collision[0]] == '#');
    //}

/*bool collisionDown(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);
    bool collisionLeft(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);
    bool collisionRight(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);
    bool collisionUp(std::array<std::string, MAP_HEIGHT>& map_sketch, sf::RectangleShape& rect);*/

    //sf::Sprite Enemy::animationDown(sf::Clock& clock, sf::Sprite& sprite)
    //{
    //	if (clock.getElapsedTime().asSeconds() > 0.2f) {
    //		if (m_rectSourceSpriteDown.left == 5 * 17)
    //			m_rectSourceSpriteDown.left = 3 * 17;
    //		else
    //			m_rectSourceSpriteDown.left += 17;
    //
    //		sprite.setTextureRect(m_rectSourceSpriteDown);
    //		clock.restart();
    //	}
    //	return sprite;
    //}
    //
    //sf::Sprite Enemy::animationLeft(sf::Clock& clock, sf::Sprite& sprite)
    //{
    //	if (clock.getElapsedTime().asSeconds() > 0.2f) {
    //
    //		if (m_rectSourceSpriteLeft.left == 8 * 17 + 4)
    //			m_rectSourceSpriteLeft.left = 6 * 17 + 4;
    //		else
    //			m_rectSourceSpriteLeft.left += 17;
    //
    //		sprite.setTextureRect(m_rectSourceSpriteLeft);
    //		clock.restart();
    //	}
    //	return sprite;
    //}
    //
    //sf::Sprite Enemy::animationRight(sf::Clock& clock, sf::Sprite& sprite)
    //{
    //	if (clock.getElapsedTime().asSeconds() > 0.2f) {
    //
    //		if (m_rectSourceSpriteRight.left == 11 * 17 + 8)
    //			m_rectSourceSpriteRight.left = 9 * 17 + 8;
    //		else
    //			m_rectSourceSpriteRight.left += 17;
    //
    //		sprite.setTextureRect(m_rectSourceSpriteRight);
    //		clock.restart();
    //	}
    //	return sprite;
    //}
    //
    //sf::Sprite Enemy::animationUp(sf::Clock& clock, sf::Sprite& sprite)
    //{
    //	if (clock.getElapsedTime().asSeconds() > 0.2f) {
    //
    //		if (m_rectSourceSpriteUp.left == 14 * 17 + 14)
    //			m_rectSourceSpriteUp.left = 12 * 17 + 14;
    //		else
    //			m_rectSourceSpriteUp.left += 17;
    //
    //		sprite.setTextureRect(m_rectSourceSpriteUp);
    //		clock.restart();
    //	}
    //	return sprite;
    //}

//sf::Sprite animationDown(sf::Clock& clock, sf::Sprite& sprite);
//sf::Sprite animationLeft(sf::Clock& clock, sf::Sprite& sprite);
//sf::Sprite animationRight(sf::Clock& clock, sf::Sprite& sprite);
//sf::Sprite animationUp(sf::Clock& clock, sf::Sprite& sprite);

/*if (clock3.getElapsedTime().asSeconds() > 0.2f) {
                cout << BH[0]->getRect().left << endl;
                if (BH[0]->getRect().left == 3 * 17) {
                    BH[0]->setRect(sf::IntRect(17, 258, CELL_SIZE, CELL_SIZE));
                    c = 0;
                }
                else {
                    c += 17;
                    BH[0]->setRect(sf::IntRect(c, 258, CELL_SIZE, CELL_SIZE));
                }

                BH[0]->draw(window);
                clock3.restart();
                compteur =  compteur + 1;
            }*/