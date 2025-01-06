#pragma once

#include "IRandomGenerator.h"

class RandomGenerator : public IRandomGenerator
{
    public:
        RandomGenerator();
        ~RandomGenerator();
        virtual int Generate() override;
};