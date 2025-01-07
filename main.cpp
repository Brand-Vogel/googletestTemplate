#include <iostream>
#include <memory>

#include "Coin/Coin.h"
#include "RandomGenerator/RandomGenerator.h"

int main()
{
    auto r = std::make_shared<RandomGenerator>();
    Coin coin(r);
    if(coin.Toss() == TossResults::Heads)
    {
        std::cout << "heads" << std::endl;
    }
    else
    {
        std::cout << "tails" << std::endl;
    }
}