#pragma once 

enum TossResults 
{
    Heads,
    Tails
};

class Coin
{
public:
    Coin();
    ~Coin();
    TossResults Toss();
};


