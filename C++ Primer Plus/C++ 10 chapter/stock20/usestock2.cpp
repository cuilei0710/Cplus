//Author: 崔小葵
//Date: 2020-12-16 01:03:25
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-16 01:03:25
// usestock2.cpp -- using th stock class
// compile with stock20.cpp
#include "stock20.h"
#include <iostream>

const int STAS = 4;
int main()
{
    // Create an array of initialized objects
    Stock stocks[STAS] = {
        Stock{"NanoSmart", 12, 20.0},
        Stock{"Boffo Objects", 200, 2.0},
        Stock{"Monolithic Obeliska", 130, 3.25},
        Stock{"Sleep Enterprises", 60, 6.5}};
    std::cout << "Stock holding:\n";
    int st;
    for (st = 0; st < STAS; st++)
    {
        stocks[st].show();
    }
    // set pointer to first element
    const Stock *top = &stocks[0];
    for (st = 0; st < STAS; st++)
    {
        top = &top->topval(stocks[st]);
    }
    // now top points to most valuable holding
    std::cout << "\nMost valuable holding:\n";
    top->show();
    system("pause");
    return 0;
}