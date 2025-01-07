#include <gtest/gtest.h>
#include "RandomGenerator/RandomGeneratorMock.h"
#include "Coin/Coin.h"


class CoinTossTest : public testing::Test {
public:
    std::unique_ptr<Coin> m_coin;
    std::shared_ptr<testing::StrictMock<RandomGeneratorMock>> m_randomGeneratorMock;

    void SetUp() override
    {
        m_randomGeneratorMock = std::make_shared<testing::StrictMock<RandomGeneratorMock>>();
        m_coin = std::make_unique<Coin>(m_randomGeneratorMock);
    }
};

TEST_F(CoinTossTest, TossReturnsHeadsWhenRandomNumberIsLessThan50)
{  
    EXPECT_CALL(*m_randomGeneratorMock, Generate()).WillOnce(testing::Return(49));
    auto result = m_coin->Toss();
    EXPECT_EQ(result, TossResults::Heads);
}

TEST_F(CoinTossTest, TossReturnsTailsWhenRandomNumberIsGreaterThan50)
{
    EXPECT_CALL(*m_randomGeneratorMock, Generate()).WillOnce(testing::Return(51));
    auto result = m_coin->Toss();
    EXPECT_EQ(result, TossResults::Tails);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}