#ifndef INFLUENCE_H
#define INFLUENCE_H

class Influence {
public:
    virtual void implement(Spot& spot) = 0;
};

#endif // INFLUENCE_H