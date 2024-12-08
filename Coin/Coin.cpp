#include "Coin.h"
#include "RandomGenerator/RandomGenerator.h"
Coin::Coin()
{
}

Coin::~Coin()
{
}

TossResults Coin::Toss()
{
    RandomGenerator random;
    if(random.Generate() < 50)
    {
        return TossResults::Heads;
    }
    else
    {
        return TossResults::Tails;
    }
}