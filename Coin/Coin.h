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
    Coin(std::unique_ptr<IRandomGenerator> randomGenerator);
    ~Coin();
    TossResults Toss();

private:
    std::unique_ptr<IRandomGenerator> m_randomGenerator;
};


