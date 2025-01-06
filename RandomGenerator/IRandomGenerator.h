#pragma once 

class IRandomGenerator
{
    public:
        virtual ~IRandomGenerator() = default;
        virtual int Generate() = 0;
};