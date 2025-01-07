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
    Coin(const std::shared_ptr<IRandomGenerator> &randomGenerator);
    ~Coin();
    TossResults Toss();

private:
    std::shared_ptr<IRandomGenerator> m_randomGenerator;
};


