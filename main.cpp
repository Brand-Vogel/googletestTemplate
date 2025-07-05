#include <iostream>
#include <memory>

#include "Coin/Coin.h"
#include "RandomGenerator/RandomGenerator.h"

int main()
{
    //Instantiate a Coin injecting a RandomGenerator object
    Coin coin(std::make_shared<RandomGenerator>());
    
    // Run Toss and print the results
    if(coin.Toss() == TossResults::Heads)
    {
        std::cout << "heads" << std::endl;
    }
    else
    {
        std::cout << "tails" << std::endl;
    }
}