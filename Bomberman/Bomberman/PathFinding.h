#pragma once
#include <iostream>
#include <stack>
#include "Global.h"

using namespace std;
class PathFinding
{
public:
    PathFinding();
    bool isValid(int row, int col);
    bool isUnBlocked(int grid[][COL], int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    std::vector<pair<int, int>> tracePath(cell cellDetails[][COL], Pair dest);
    std::vector<pair<int, int>> aStarSearch(int grid[][COL], Pair src, Pair dest);


};

