//Author: 崔小葵
//Date: 2020-12-15 23:26:40
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-15 23:26:40
// usestock1.cpp -- using the Stock class
// compile with stock10.cpp
#include "stock10.h"
#include <iostream>

int main()
{
    {
        using std::cout;
        cout << "Using construtors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0); // syntax 1
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock{"Nifty Foods", 10, 50.0}; // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    system("pause");
    return 0;
}