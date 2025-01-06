#include <gtest/gtest.h>
#include "RandomGenerator/RandomGeneratorMock.h"
#include "Coin/Coin.h"


class CoinTossTest : public testing::Test {
public:
    std::unique_ptr<Coin> m_coin;
    RandomGeneratorMock *m_randomGeneratorMock;

    void SetUp()
    {
        // Code here will be called immediately after the constructor (right before each test).
        auto randomGeneratorMock = std::make_shared<testing::StrictMock<RandomGeneratorMock>>();
        m_randomGeneratorMock = randomGeneratorMock.get();

        m_coin = std::make_unique<Coin>(std::make_unique<RandomGeneratorMock>());

    }
};

TEST_F(CoinTossTest, ExampleTest) {

    EXPECT_CALL(*m_randomGeneratorMock, Generate()).Times(3).WillOnce(testing::Return(50));
    auto result = m_coin->Toss();
    EXPECT_EQ(result, TossResults::Heads);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}