//Author: 崔小葵
//Date: 2021-01-09 23:26:53
//Last Modified by: 崔小葵
//Last Modified time: 2021-01-09 23:26:53
#ifndef SALE_H_
#define SALE_H_

namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales(double ar[], int n);
        Sales();
        void showSales();
    };
}
#endif