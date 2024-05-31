#include "spot.h"

Spot::Spot(int x, int y, char cat) : locationX(x), locationY(y), category(cat) {}

void Spot::setLocation(int x, int y) {
    locationX = x;
    locationY = y;
}

void Spot::setCategory(char cat) {
    category = cat;
}

int Spot::getLocationX() const {
    return locationX;
}

int Spot::getLocationY() const {
    return locationY;
}

char Spot::getCategory() const {
    return category;
}
