#ifndef ASSISTS_H
#define ASSISTS_H

class Assists {
public:
    static Spot createRandomLocation();
    static int evaluateDistance(const Spot& spot1, const Spot& spot2);
};

#endif // ASSISTS_H