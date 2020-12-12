//Author: 崔小葵
//Date: 2020-12-12 11:15:32
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-12 11:15:32
#include "9.6.4.h"
#include <iostream>

namespace SALES
{
    using namespace std;

    void setSales(Sales &s, const double ar[], int n)
    {
        double total = 0.0;
        double max = ar[0];
        double min = ar[0];

        for (size_t i = 0; i < n; i++)
        {
            total += ar[i];
            s.sales[i] = ar[i];
            if (max < ar[i])
            {
                max = ar[i];
            }
            if (min > ar[i])
            {
                min = ar[i];
            }
        }
        for (size_t i = 0; i < QUARTERS; i++)
        {
            s.sales[i] = 0.0;
        }
        s.average = total / n;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales &s)
    {
        double total = 0.0;
        double max = 0.0;
        double min = INT_MAX;
        double input = 0.0;

        cout << "Gathers sales for 4 quarters interactively; " << endl;
        for (size_t i = 0; i < QUARTERS; i++)
        {
            cin >> input;
            if (min > input)
            {
                min = input;
            }
            if (max < input)
            {
                max = input;
            }
            total += input;
            s.sales[i] = input;
        }
        s.average = total / QUARTERS;
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales &s)
    {
        cout << "Sales: ";
        for (size_t i = 0; i < QUARTERS; i++)
        {
            cout << s.sales[i] << " ";
        }
        cout << endl;
        cout << "Average: " << s.average << endl;
        cout << "Max: " << s.max << endl;
        cout << "Min: " << s.min << endl;
    }
} // namespace SALES
