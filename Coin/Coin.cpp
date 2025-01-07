#include "Coin.h"


Coin::Coin(const std::shared_ptr<IRandomGenerator> &randomGenerator) : m_randomGenerator(randomGenerator)
{
}

Coin::~Coin()
{
}

TossResults Coin::Toss()
{
    if(m_randomGenerator->Generate() < 50)
    {
        return TossResults::Heads;
    }
    else
    {
        return TossResults::Tails;
    }
}