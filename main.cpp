#include <iostream>

#include "Coin/Coin.h"

int main()
{
    Coin coin;
    if(coin.Toss() == TossResults::Heads)
    {
        std::cout << "heads" << std::endl;
    }
    else
    {
        std::cout << "tails" << std::endl;
    }
}