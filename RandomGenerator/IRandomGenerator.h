#pragma once 
/**
 * @brief This interface is implemented by the real and mocked random generators
 */
class IRandomGenerator
{
    public:
        virtual ~IRandomGenerator() = default;
        virtual int Generate() = 0;
};