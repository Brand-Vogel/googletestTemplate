#pragma once

#include "gmock/gmock.h"
#include "IRandomGenerator.h"

/**
 * Mocked implementation of the IRandomGenerator interface. Mocke functions
 * are generated using googlemock
 */
class RandomGeneratorMock : public IRandomGenerator
{
public:
    MOCK_METHOD(int, Generate, (), (override));
};