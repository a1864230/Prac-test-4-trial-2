#ifndef SPOT_H
#define SPOT_H

class Spot {
private:
    int locationX;
    int locationY;
    char category;

public:
    Spot(int x = 0, int y = 0, char cat = ' ');
    void setLocation(int x, int y);
    void setCategory(char cat);
    int getLocationX() const;
    int getLocationY() const;
    char getCategory() const;
};

#endif // SPOT_H