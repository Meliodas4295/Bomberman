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

            /*m_midleExplosion[2].setPosition(p.x, p.y);
                window.draw(m_midleExplosion[2]);
                m_midleExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 49, 16, 16));
                animation(clock, m_midleExplosion[2], m_midleExplosion);
                if (collisionRock(map_sketch, p, Down, 0) && collisionBox(map_sketch, p, Down, 0)) {
                    m_firstDownExplosion[2].setPosition(p.x, p.y + 16);
                    window.draw(m_firstDownExplosion[2]);
                    m_firstDownExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 4 * 16.5, 16, 16));
                    animation(clock, m_firstDownExplosion[2], m_firstDownExplosion);
                    if (collisionRock(map_sketch, p, Down, 1) && collisionBox(map_sketch, p, Down, 1)) {
                        m_secondDownExplosion[2].setPosition(p.x, p.y + 30);
                        window.draw(m_secondDownExplosion[2]);
                        m_secondDownExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 5 * 16.5, 16, 16));
                        animation(clock, m_secondDownExplosion[2], m_secondDownExplosion);
                    }
                }
                if (collisionRock(map_sketch, p, Left, 0) && collisionBox(map_sketch, p, Left, 0)) {
                    m_firstLeftExplosion[2].setPosition(p.x - 16, p.y);
                    window.draw(m_firstLeftExplosion[2]);
                    m_firstLeftExplosion[2].setTextureRect(sf::IntRect((1 + 5 * 2) * 17, 3 * 16.5, 16, 16));
                    animation(clock, m_firstLeftExplosion[2], m_firstLeftExplosion);
                    if (collisionRock(map_sketch, p, Left, 1) && collisionBox(map_sketch, p, Left, 1)) {
                        m_secondLeftExplosion[2].setPosition(p.x - 32, p.y);
                        window.draw(m_secondLeftExplosion[2]);
                        m_secondLeftExplosion[2].setTextureRect(sf::IntRect((5 * 2) * 17, 3 * 16.5, 16, 16));
                        animation(clock, m_secondLeftExplosion[2], m_secondLeftExplosion);
                    }
                }
                if (collisionRock(map_sketch, p, Right, 0) && collisionBox(map_sketch, p, Right, 0)) {
                    m_firstRightExplosion[2].setPosition(p.x + 16, p.y);
                    window.draw(m_firstRightExplosion[2]);
                    m_firstRightExplosion[2].setTextureRect(sf::IntRect((3 + 5 * 2) * 17, 3 * 16.5, 16, 16));
                    animation(clock, m_firstRightExplosion[2], m_firstRightExplosion);
                    if (collisionRock(map_sketch, p, Right, 1) && collisionBox(map_sketch, p, Right, 1)) {
                        m_secondRightExplosion[2].setPosition(p.x + 32, p.y);
                        window.draw(m_secondRightExplosion[2]);
                        m_secondRightExplosion[2].setTextureRect(sf::IntRect((4 + 5 * 2) * 17, 3 * 16.5, 16, 16));
                        animation(clock, m_secondRightExplosion[2], m_secondRightExplosion);
                    }
                }
                if (collisionRock(map_sketch, p, Up, 0) && collisionBox(map_sketch, p, Up, 0)) {
                    m_firstUpExplosion[2].setPosition(p.x, p.y - 16);
                    window.draw(m_firstUpExplosion[2]);
                    m_firstUpExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 32, 16, 16));
                    animation(clock, m_firstUpExplosion[2], m_firstUpExplosion);
                    if (collisionRock(map_sketch, p, Up, 1) && collisionBox(map_sketch, p, Up, 1)) {
                        m_secondUpExplosion[2].setPosition(p.x, p.y - 30);
                        window.draw(m_secondUpExplosion[2]);
                        m_secondUpExplosion[2].setTextureRect(sf::IntRect((2 + 5 * 2) * 17, 17, 16, 14));
                        animation(clock, m_secondUpExplosion[2], m_secondUpExplosion);
                    }
                }*/


                //bool Explosion::animationDestructionBox(sf::Clock& clock)
                //{
                //    if (clock.getElapsedTime().asSeconds() > 0.5f) {
                //
                //        if (box.left == 22 * 16.4) {
                //            box.left = 17 * 16.4;
                //        }
                //        else
                //            box.left += 16.4;
                //
                //        m_destroyBox.setTextureRect(box);
                //        clock.restart();
                //    }
                //    else
                //        return false;
                //}

                /*void Explosion::destroyBox(std::array<std::string, MAP_HEIGHT>& map_sketch, Position p, sf::Clock& clock, sf::RenderWindow& window)
                {
                    if (map_sketch[floor((p.y + 32) / 16)][floor(p.x / 16)] == '=') {
                        m_destroyBox.setPosition(p.x, p.y + 32);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor((p.y + 32) / 16)][floor(p.x / 16)] = '.';
                        }
                    }

                    if (map_sketch[floor(p.y / 16)][floor((p.x - 32) / 16)] == '=' ) {
                        m_destroyBox.setPosition(p.x - 32, p.y);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor(p.y / 16)][floor((p.x - 32) / 16)] = '.';
                        }
                    }

                    if (map_sketch[floor(p.y / 16)][floor((p.x + 32) / 16)] == '=') {
                        m_destroyBox.setPosition(p.x + 32, p.y);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor(p.y / 16)][floor((p.x + 32) / 16)] = '.';
                        }
                    }

                    if (map_sketch[floor((p.y - 32) / 16)][floor(p.x / 16)] == '=') {
                        m_destroyBox.setPosition(p.x, p.y - 32);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor((p.y - 32) / 16)][floor(p.x / 16)] = '.';
                        }
                    }


                    if (map_sketch[floor((p.y + 16) / 16)][floor(p.x/16)] == '=') {
                        m_destroyBox.setPosition(p.x, p.y+16);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor((p.y + 16) / 16)][floor(p.x / 16)] = '.';
                        }
                    }
                    if (map_sketch[floor(p.y / 16)][floor((p.x-16) / 16)] == '=') {
                        m_destroyBox.setPosition(p.x - 16, p.y);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor(p.y / 16)][floor((p.x - 16) / 16)] = '.';
                        }
                    }
                    if (map_sketch[floor(p.y / 16)][floor((p.x + 16) / 16)] == '=') {
                        m_destroyBox.setPosition(p.x + 16, p.y );
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {

                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor(p.y / 16)][floor((p.x + 16) / 16)] = '.';
                        }
                    }
                    if (map_sketch[floor((p.y - 16) / 16)][floor(p.x / 16)] == '=') {
                        m_destroyBox.setPosition(p.x, p.y - 16);
                        window.draw(m_destroyBox);
                        if (this->animationDestructionBox(clock)) {
                            m_destroyBox.setTextureRect(sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16));
                            map_sketch[floor((p.y - 16) / 16)][floor(p.x / 16)] = '.';
                        }
                    }
                }*/


                //sf::Sprite Explosion::getMsprite() const
                //{
                //    return m_sprite;
                //}
                //
                //void Explosion::setMsprite(sf::Sprite msprite)
                //{
                //    m_sprite = msprite;
                //}

                //sf::Sprite Explosion::getMdestroyBox() const
                //{
                //    return m_destroyBox;
                //}
                //
                //void Explosion::setMdestroyBox(sf::Sprite mdestroyBox)
                //{
                //    m_destroyBox = mdestroyBox;
                //}

                //vector<sf::Sprite> Explosion::getMmidleExplosion() const
                //{
                //    return m_midleExplosion;
                //}
                //
                //void Explosion::setMmidleExplosion(vector<sf::Sprite> mmidleExplosion)
                //{
                //    m_midleExplosion = mmidleExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMfirstUpExplosion() const
                //{
                //    return m_firstUpExplosion;
                //}
                //
                //void Explosion::setMfirstUpExplosion(vector<sf::Sprite> mfirstUpExplosion)
                //{
                //    m_firstUpExplosion = mfirstUpExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMsecondUpExplosion() const
                //{
                //    return m_secondUpExplosion;
                //}
                //
                //void Explosion::setMsecondUpExplosion(vector<sf::Sprite> msecondUpExplosion)
                //{
                //    m_secondUpExplosion = msecondUpExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMfirstDownExplosion() const
                //{
                //    return m_firstDownExplosion;
                //}
                //
                //void Explosion::setMfirstDownExplosion(vector<sf::Sprite> mfirstDownExplosion)
                //{
                //    m_firstDownExplosion = mfirstDownExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMsecondDownExplosion() const
                //{
                //    return m_secondDownExplosion;
                //}
                //
                //void Explosion::setMsecondDownExplosion(vector<sf::Sprite> msecondDownExplosion)
                //{
                //    m_secondDownExplosion = msecondDownExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMfirstRightExplosion() const
                //{
                //    return m_firstRightExplosion;
                //}
                //
                //void Explosion::setMfirstRightExplosion(vector<sf::Sprite> mfirstRightExplosion)
                //{
                //    m_firstRightExplosion = mfirstRightExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMsecondRightExplosion() const
                //{
                //    return m_secondRightExplosion;
                //}
                //
                //void Explosion::setMsecondRightExplosion(vector<sf::Sprite> msecondRightExplosion)
                //{
                //    m_secondRightExplosion = msecondRightExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMfirstLeftExplosion() const
                //{
                //    return m_firstLeftExplosion;
                //}
                //
                //void Explosion::setMfirstLeftExplosion(vector<sf::Sprite> mfirstLeftExplosion)
                //{
                //    m_firstLeftExplosion = mfirstLeftExplosion;
                //}
                //
                //vector<sf::Sprite> Explosion::getMsecondLeftExplosion() const
                //{
                //    return m_secondLeftExplosion;
                //}
                //
                //void Explosion::setMsecondLeftExplosion(vector<sf::Sprite> msecondLeftExplosion)
                //{
                //    m_secondLeftExplosion = msecondLeftExplosion;
                //}

/*for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((2 + 5 * i)*17, 49, 16, 16));
            m_midleExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((1 + 5 * i) * 17, 3 * 16.5 , 16, 16));
        m_firstLeftExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((5 * i) * 17, 3 * 16.5, 16, 16));
        m_secondLeftExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((3 + 5 * i) * 17, 3 * 16.5, 16, 16));
        m_firstRightExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((4 + 5 * i) * 17 , 3 * 16.5, 16, 16));
        m_secondRightExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17, 32, 16, 16));
        m_firstUpExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17 , 17, 16, 14));
        m_secondUpExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17, 4 * 16.5, 16, 16));
        m_firstDownExplosion.push_back(m_sprite);
    }
    for (int i = 0; i < 3; i++) {
        m_sprite.setTextureRect(sf::IntRect((2 + 5 * i) * 17, 5 * 16.5, 16, 16));
        m_secondDownExplosion.push_back(m_sprite);
    }*/
    /*m_textBox.loadFromFile("stage.png");
    m_destroyBox.setTexture(m_textBox);
    box = sf::IntRect(17 * 16.4, 33 * 17.1, 16, 16);
    m_destroyBox.setTextureRect(box);*/


    /*if (clock.getElapsedTime().asSeconds() > 1.0f) {

            if (box.left == 22 * 16.4) {
                box.left = 17 * 16.4;
                return true;
            }
            else
                box.left += 16.4;

            m_destroyBox.setTextureRect(box);
            clock.restart();
        }
        else {
            return false;
        }*/


        /*sf::Sprite getMsprite() const;
            void setMsprite(sf::Sprite msprite);*/

            /* sf::Sprite getMdestroyBox() const;
             void setMdestroyBox(sf::Sprite mdestroyBox);*/


             /*vector<sf::Sprite> getMmidleExplosion() const;
             void setMmidleExplosion(vector<sf::Sprite> mmidleExplosion);

             vector<sf::Sprite> getMfirstUpExplosion() const;
             void setMfirstUpExplosion(vector<sf::Sprite> mfirstUpExplosion);

             vector<sf::Sprite> getMsecondUpExplosion() const;
             void setMsecondUpExplosion(vector<sf::Sprite> msecondUpExplosion);

             vector<sf::Sprite> getMfirstDownExplosion() const;
             void setMfirstDownExplosion(vector<sf::Sprite> mfirstDownExplosion);

             vector<sf::Sprite> getMsecondDownExplosion() const;
             void setMsecondDownExplosion(vector<sf::Sprite> msecondDownExplosion);

             vector<sf::Sprite> getMfirstRightExplosion() const;
             void setMfirstRightExplosion(vector<sf::Sprite> mfirstRightExplosion);

             vector<sf::Sprite> getMsecondRightExplosion() const;
             void setMsecondRightExplosion(vector<sf::Sprite> msecondRightExplosion);

             vector<sf::Sprite> getMfirstLeftExplosion() const;
             void setMfirstLeftExplosion(vector<sf::Sprite> mfirstLeftExplosion);

             vector<sf::Sprite> getMsecondLeftExplosion() const;
             void setMsecondLeftExplosion(vector<sf::Sprite> msecondLeftExplosion);*/

             //sf::Sprite m_sprite;
                /* sf::Texture m_textBox;
                 sf::Sprite m_destroyBox;
                 sf::IntRect box;*/
                 /*vector<sf::Sprite> m_midleExplosion;
                 vector<sf::Sprite> m_firstUpExplosion;
                 vector<sf::Sprite> m_secondUpExplosion;
                 vector<sf::Sprite> m_firstDownExplosion;
                 vector<sf::Sprite> m_secondDownExplosion;
                 vector<sf::Sprite> m_firstRightExplosion;
                 vector<sf::Sprite> m_secondRightExplosion;
                 vector<sf::Sprite> m_firstLeftExplosion;
                 vector<sf::Sprite> m_secondLeftExplosion;*/





                 /*m_rectFirstDown = sf::IntRect(32,0,32,32);
                     m_firstDownExplosion.setTexture(m_texture);
                     m_firstDownExplosion.setTextureRect(m_rectFirstDown);
                     m_firstDownExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_firstDownExplosion);

                     m_rectSecondDown = sf::IntRect(4*32, 0, 32, 32);
                     m_secondDownExplosion.setTexture(m_texture);
                     m_secondDownExplosion.setTextureRect(m_rectSecondDown);
                     m_secondDownExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_secondDownExplosion);

                     m_rectFirstLeft = sf::IntRect(2*32, 0, 32, 32);
                     m_firstLeftExplosion.setTexture(m_texture);
                     m_firstLeftExplosion.setTextureRect(m_rectFirstLeft);
                     m_firstLeftExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_firstLeftExplosion);

                     m_rectSecondLeft = sf::IntRect(6*32, 0, 32, 32);
                     m_secondLeftExplosion.setTexture(m_texture);
                     m_secondLeftExplosion.setTextureRect(m_rectSecondLeft);
                     m_secondLeftExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_secondLeftExplosion);

                     m_rectFirstRight = sf::IntRect(2*32, 0, 32, 32);
                     m_firstRightExplosion.setTexture(m_texture);
                     m_firstRightExplosion.setTextureRect(m_rectFirstRight);
                     m_firstRightExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_firstRightExplosion);

                     m_rectSecondRight = sf::IntRect(5*32, 0, 32, 32);
                     m_secondRightExplosion.setTexture(m_texture);
                     m_secondRightExplosion.setTextureRect(m_rectSecondRight);
                     m_secondRightExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_secondRightExplosion);

                     m_rectFirstUp = sf::IntRect(32, 0, 32, 32);
                     m_firstUpExplosion.setTexture(m_texture);
                     m_firstUpExplosion.setTextureRect(m_rectFirstUp);
                     m_firstUpExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_firstUpExplosion);

                     m_rectSecondUp = sf::IntRect(3*32, 0, 32, 32);
                     m_secondUpExplosion.setTexture(m_texture);
                     m_secondUpExplosion.setTextureRect(m_rectSecondUp);
                     m_secondUpExplosion.setScale(0.5, 0.5);
                     flames.push_back(m_secondUpExplosion);*/

                     //if (collisionRock(map_sketch, p, Down, 0) && collisionBox(map_sketch, p, Down, 0)) {
                         //    m_secondDownExplosion.setPosition(p.x, p.y + 16);
                         //    window.draw(m_secondDownExplosion);
                         //    animation(m_secondDownExplosion, m_rectSecondDown);
                         //    /*if (collisionRock(map_sketch, p, Down, 1) && collisionBox(map_sketch, p, Down, 1)) {
                         //        m_secondDownExplosion.setPosition(p.x, p.y + 30);
                         //        window.draw(m_secondDownExplosion);
                         //        animation(m_secondDownExplosion, m_rectSecondDown);
                         //    }*/
                         //}
                         //if (collisionRock(map_sketch, p, Left, 0) && collisionBox(map_sketch, p, Left, 0)) {
                         //    m_secondLeftExplosion.setPosition(p.x - 16, p.y);
                         //    window.draw(m_secondLeftExplosion);
                         //    animation(m_secondLeftExplosion, m_rectSecondLeft);
                         //    /*if (collisionRock(map_sketch, p, Left, 1) && collisionBox(map_sketch, p, Left, 1)) {
                         //        m_secondLeftExplosion.setPosition(p.x - 32, p.y);
                         //        window.draw(m_secondLeftExplosion);
                         //        animation(m_secondLeftExplosion, m_rectSecondLeft);
                         //    }*/
                         //}
                         //if (collisionRock(map_sketch, p, Right, 0) && collisionBox(map_sketch, p, Right, 0)) {
                         //    m_secondRightExplosion.setPosition(p.x + 16, p.y);
                         //    window.draw(m_secondRightExplosion);
                         //    animation(m_secondRightExplosion, m_rectSecondRight);
                         //    /*if (collisionRock(map_sketch, p, Right, 1) && collisionBox(map_sketch, p, Right, 1)) {
                         //        m_secondRightExplosion.setPosition(p.x + 32, p.y);
                         //        window.draw(m_secondRightExplosion);
                         //        animation(m_secondRightExplosion, m_rectSecondRight);
                         //    }*/
                         //}
                         //if (collisionRock(map_sketch, p, Up, 0) && collisionBox(map_sketch, p, Up, 0)) {
                         //    m_secondUpExplosion.setPosition(p.x, p.y - 16);
                         //    window.draw(m_secondUpExplosion);
                         //    animation(m_secondUpExplosion, m_rectSecondUp);
                         //    /*if (collisionRock(map_sketch, p, Up, 1) && collisionBox(map_sketch, p, Up, 1)) {
                         //        m_secondUpExplosion.setPosition(p.x, p.y - 30);
                         //        window.draw(m_secondUpExplosion);
                         //        animation(m_secondUpExplosion, m_rectSecondUp);
                         //    }*/
                         //}
                         //this->updateFlames();


//flames.clear();
   /* m_midleExplosion.setPosition(-12, -12);
    m_firstDownExplosion.setPosition(-12, -12);
    m_secondDownExplosion.setPosition(-12, -12);
    m_firstLeftExplosion.setPosition(-12, -12);
    m_secondLeftExplosion.setPosition(-12, -12);
    m_firstRightExplosion.setPosition(-12, -12);
    m_secondRightExplosion.setPosition(-12, -12);
    m_firstUpExplosion.setPosition(-12, -12);
    m_secondUpExplosion.setPosition(-12, -12);*/
    /*flames.push_back(m_midleExplosion);
    flames.push_back(m_firstDownExplosion);
    flames.push_back(m_secondDownExplosion);
    flames.push_back(m_firstLeftExplosion);
    flames.push_back(m_secondLeftExplosion);
    flames.push_back(m_firstRightExplosion);
    flames.push_back(m_secondRightExplosion);
    flames.push_back(m_firstUpExplosion);
    flames.push_back(m_secondUpExplosion);*/

    //void Explosion::updateFlames()
    //{
    //    flames.clear();
    //    flames.push_back(m_midleExplosion);
    //    flames.push_back(m_firstDownExplosion);
    //    flames.push_back(m_secondDownExplosion);
    //    flames.push_back(m_firstLeftExplosion);
    //    flames.push_back(m_secondLeftExplosion);
    //    flames.push_back(m_firstRightExplosion);
    //    flames.push_back(m_secondRightExplosion);
    //    flames.push_back(m_firstUpExplosion);
    //    flames.push_back(m_secondUpExplosion);
    //
    //}

//void updateFlames();

/*sf::Sprite m_firstUpExplosion;
    sf::Sprite m_secondUpExplosion;
    sf::Sprite m_firstDownExplosion;
    sf::Sprite m_secondDownExplosion;
    sf::Sprite m_firstRightExplosion;
    sf::Sprite m_secondRightExplosion;
    sf::Sprite m_firstLeftExplosion;
    sf::Sprite m_secondLeftExplosion;
    sf::IntRect m_rectMidle;
    sf::IntRect m_rectFirstUp;
    sf::IntRect m_rectSecondUp;
    sf::IntRect m_rectFirstDown;
    sf::IntRect m_rectSecondDown;
    sf::IntRect m_rectFirstRight;
    sf::IntRect m_rectSecondRight;
    sf::IntRect m_rectFirstLeft;
    sf::IntRect m_rectSecondLeft;
    vector<sf::Sprite> flames;*/

    /*sf::RectangleShape rect;
        rect.setSize(sf::Vector2f(12, 8));
        rect.setFillColor(sf::Color::Black);*/

        /*sf::RectangleShape rectE;
        rectE.setSize(sf::Vector2f(12, 8));
        rectE.setFillColor(sf::Color::Black);*/


        /*if (IsDestroyBox) {
                           if (bomberman.getBombes()[i]->destructBox(map_sketch, window)) {
                               IsDestroyBox = false;
                               bomberman.getBombes()[i]->setNbreBoxDestroy(0);
                           }
                       }*/

                       //map_sketch[floor((bomberman.getBombes()[nbreBombPoser - 1]->getSprite().getPosition().y) / 16)][floor((bomberman.getBombes()[nbreBombPoser - 1]->getSprite().getPosition().x) / 16)] = 'o';
                       //p.x = BH[0]->getSprite().getPosition().x;
                       //p.y = BH[0]->getSprite().getPosition().y;
                       //if (BH.size() < 2) {
                       //    BH.push_back(new Bomb(sf::IntRect(17, 258, CELL_SIZE, CELL_SIZE), { short(floor(((rect.getPosition().x - 1) + 6) / 16) * 16), short(floor(((rect.getPosition().y - 2) + 4) / 16) * 16) }));
                       //    p.x = short(floor(((rect.getPosition().x - 1)+6) / 16) * 16);
                       //    p.y = short(floor(((rect.getPosition().y - 2)+4) / 16) * 16);
                       //    IsBomb = true;
                       //}

        //for (int i = 0; i < nbreBombPoser; i++) {
                        //    if (Check) {
                        //        bomberman.getBombes()[i]->getExplosion()->updateBox();
                        //        bomberman.getBombes()[i]->getExplosion()->CheckBoxToDestroy(map_sketch, bomberman.getBombes()[i]->getPosition());
                        //        if (i == nbreBombPoser - 1) {
                        //            Check = false;
                        //            ok = false;
                        //        }

                        //    }
                        //    //bomberman.getBombes()[i]->animation(window);
                        //    if (bomberman.getBombes()[i]->animation()) {
                        //        cout << "ca marche" << endl;
                        //        map_sketch[floor((bomberman.getBombes()[i]->getSprite().getPosition().y) / 16)][floor((bomberman.getBombes()[i]->getSprite().getPosition().x) / 16)] = '.';
                        //        if (IsDestroyBox) {
                        //            IsExplode = true;
                        //            ok = true;
                        //            bomberman.getBombes()[i]->getExplosion()->RestartClock();
                        //            if (i == nbreBombPoser - 1) {
                        //                IsDestroyBox = false;
                        //            }
                        //            for (int k = 0; k < bomberman.getBombes()[i]->getExplosion()->getBoxes().size(); k++) {
                        //                bomberman.getBombes()[i]->getExplosion()->getBoxes()[k]->getClock().restart();
                        //            }
                        //        }
                        //        //IsDestroyBox = true;
                        //        //Boxes = bomberman.getBombes()[i]->getExplosion()->CheckBoxToDestroy(map_sketch, bomberman.getBombes()[i]->getPosition());
                        //    }
                        //    if (IsExplode == false) {
                        //        bomberman.getBombes()[i]->draw(window);

                        //    }
                        //    if (IsExplode) {
                        //        if (bomberman.getBombes()[i]->getExplosion()->IsPlayerHasTouch(bomberman.getSprite())) {
                        //            isDead = true;
                        //        }
                        //        if (bomberman.getBombes()[i]->explode(map_sketch, window)) {
                        //            IsExplode = false;
                        //            nbreBombPoser = 0;
                        //            //bomberman.getBombes()[i]->getExplosion()->setCompteur(0);
                        //        }
                        //    }
                        //    if (ok) {
                        //        for (int j = 0; j < bomberman.getBombes()[i]->getExplosion()->getBoxes().size(); j++) {
                        //            bomberman.getBombes()[i]->getExplosion()->getBoxes()[j]->draw(window);
                        //            if (bomberman.getBombes()[i]->getExplosion()->getBoxes()[j]->animationDestructionBox()) {
                        //                ChanceToPlace = rand() % 2;
                        //                if (ChanceToPlace == 1) {
                        //                    Item* item = new Item();
                        //                    item->PlaceItem(bomberman.getBombes()[i]->getExplosion()->getBoxes()[j]->getMp());
                        //                    items.push_back(item);
                        //                }
                        //                map_sketch[floor(bomberman.getBombes()[i]->getExplosion()->getBoxes()[j]->getMp().y / 16)][floor(bomberman.getBombes()[i]->getExplosion()->getBoxes()[j]->getMp().x / 16)] = '.';
                        //                //bomberman.getBombes()[i]->getExplosion()->getBoxes()[j]->setCompteur(0);
                        //                /*delete Boxes[i];
                        //                Boxes.erase(Boxes.begin());*/
                        //            }
                        //        }
                        //    }


         //Check = true;
                            //IsDestroyBox = true;
                            //cout << nbreBombPoser << endl;
                            //cout << bomberman.getBombes().size() << endl;

        //vector<Box*> Boxes;
        //int ChanceToPlace;
        //vector<Item*> items;
        //Position p;
        //int x;
        //int y;


        //bool Check = false;
        //bool ok = false;

        //bool IsBomb = false;
        //bool IsExplode = false;
        //bool IsDestroyBox = false;