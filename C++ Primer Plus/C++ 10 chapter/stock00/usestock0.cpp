//Author: 崔小葵
//Date: 2020-12-15 00:44:41
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-15 00:44:41
// usestock0.cpp -- the client program
// compile with stock00.cpp
#include "stock00.h"
#include <iostream>

int main()
{
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(30000, 0.125);
    fluffy_the_cat.show();
    system("pause");
    return 0;
}