#include "spot.h"
#include "influence.h"
#include "assists.h"
#include <iostream>

class MyInfluence : public Influence {
public:
    void implement(Spot& spot) override {
        spot.setCategory('X');
    }
};

int main() {
    Spot spot1(1, 2, 'A');
    Spot spot2 = Assists::createRandomLocation();
    std::cout << "Spot 2 location: (" << spot2.getLocationX() << ", " << spot2.getLocationY() << ")" << std::endl;
    std::cout << "Distance between spots: " << Assists::evaluateDistance(spot1, spot2) << std::endl;

    MyInfluence influence;
    influence.implement(spot2);
    std::cout << "Spot 2 category after influence: " << spot2.getCategory() << std::endl;

    return 0;
}