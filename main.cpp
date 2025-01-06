#include <iostream>
#include <memory>

#include "Coin/Coin.h"
#include "RandomGenerator/RandomGenerator.h"

int main()
{
    Coin coin(std::make_unique<RandomGenerator>());
    if(coin.Toss() == TossResults::Heads)
    {
        std::cout << "heads" << std::endl;
    }
    else
    {
        std::cout << "tails" << std::endl;
    }
}