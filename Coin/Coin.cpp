#include "Coin.h"


Coin::Coin(std::unique_ptr<IRandomGenerator> randomGenerator)
{
    m_randomGenerator = std::move(randomGenerator);
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