#pragma once

#include "IRandomGenerator.h"

/**
 * The real implementation of the random generator
 */
class RandomGenerator : public IRandomGenerator
{
    public:
        /**
         * @brief Class constructor
         */
        RandomGenerator();

        /**
         * @brief Class destructor
         */
        ~RandomGenerator();

        /**
         * @brief Returns a random integer between 1 and 100
         * @return An integer between 1 and 100
         */
        virtual int Generate() override;
};