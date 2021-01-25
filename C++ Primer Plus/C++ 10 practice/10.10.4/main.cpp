//Author: 崔小葵
//Date: 2021-01-25 12:59:01
//Last Modified by: 崔小葵
//Last Modified time: 2021-01-25 12:59:01
#include "sales.h"
#include <iostream>

using namespace SALES;

int main(){
    double ar[3] = { 32.1, 23.2, 65.3 };
    Sales sales1(ar, 3);
    sales1.showSales();

    Sales sales2;
    sales2.showSales();
    system("pause");
}