#pragma once 

#include <memory>
#include "RandomGenerator/IRandomGenerator.h"

enum TossResults 
{
    Heads,
    Tails
};

class Coin
{
public:
    Coin(IRandomGenerator *randomGenerator);
    ~Coin();
    TossResults Toss();

private:
    IRandomGenerator *m_randomGenerator;
};


