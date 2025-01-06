#pragma once

#include "gmock/gmock.h"
#include "IRandomGenerator.h"

class RandomGeneratorMock : public IRandomGenerator
{
public:
    MOCK_METHOD(int, Generate, (), (override));
};