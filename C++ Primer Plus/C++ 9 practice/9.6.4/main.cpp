//Author: 崔小葵
//Date: 2020-12-12 11:41:09
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-12 11:41:09
#include "9.6.4.h"
#include <iostream>

int main()
{
    SALES::Sales sales_1;
    SALES::Sales sales_2;

    double ar[4] = {32.1, 25.2, 16.9, 28.3};
    SALES::setSales(sales_1, ar, 4);
    SALES::setSales(sales_2);
    system("cls");
    SALES::showSales(sales_1);
    std::cout << std::endl;
    SALES::showSales(sales_2);
    system("pause");
    return 0;
}