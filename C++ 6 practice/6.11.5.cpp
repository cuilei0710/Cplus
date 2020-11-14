/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 21:26:20
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-14 21:26:20
 */
#include <iostream>

using namespace std;

const double RATE1 = 0.1;
const double RATE2 = 0.15;
const double RATE3 = 0.2;

int main()
{
    double income = 0.0;
    double tax = 0.0;

    cout << "Please enter your income: ";
    while ((cin >> income) && (income > 0))
    {
        if (income <= 5000)
        {
            tax = 0.0;
        }
        else if (5000 < income && income <= 15000)
        {
            tax = (income - 5000) * RATE1;
        }
        else if (15000 < income && income <= 35000)
        {
            tax = (15000 - 5000) * RATE1 + (income - 15000) * RATE2;
        }
        else
        {
            tax = (15000 - 5000) * RATE1 + (35000 - 15000) * RATE2 + (income - 35000) * RATE3;
        }
        cout << "Income = " << income << ", Tax = " << tax << endl;
    }
    system("pause");
    return 0;
}