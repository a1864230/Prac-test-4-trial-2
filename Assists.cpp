#include "assists.h"
#include "spot.h"
#include <cstdlib>
#include <ctime>

Spot Assists::createRandomLocation() {
    srand(static_cast<unsigned int>(time(0)));
    int x = rand() % 10;  // assuming a 10x10 grid
    int y = rand() % 10;
    return Spot(x, y, ' ');  // default category
}

int Assists::evaluateDistance(const Spot& spot1, const Spot& spot2) {
    return abs(spot1.getLocationX() - spot2.getLocationX()) + abs(spot1.getLocationY() - spot2.getLocationY());
}