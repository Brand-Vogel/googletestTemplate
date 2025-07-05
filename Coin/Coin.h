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
    /**
     * @brief Constructot of the Coin class.
     * @param randomGenerator A pointer to an object implementing
     * the IRandomGenerator interface. It is used as the engine to
     * drive the flipping of the coin functionality
     */
    Coin(const std::shared_ptr<IRandomGenerator> randomGenerator);

    /**
     * @brief Class destructor
     */
    ~Coin();

    /**
     * @brief Simulates a coin toss
     * @return TossResults::Heads or TossResults::Tails randomly
     */
    TossResults Toss();

private:
    std::shared_ptr<IRandomGenerator> m_randomGenerator;
};


