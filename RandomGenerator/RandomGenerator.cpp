#include "RandomGenerator.h"
#include <random>

RandomGenerator::RandomGenerator()
{}

RandomGenerator::~RandomGenerator()
{}

int RandomGenerator::Generate()
{
    std::default_random_engine generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(1,100);
    return distribution(generator);
}