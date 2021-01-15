//Author: 崔小葵
//Date: 2021-01-09 23:32:08
//Last Modified by: 崔小葵
//Last Modified time: 2021-01-09 23:32:08
#include "sales.h"

using namespace std;
using namespace SALES;

SALES::Sales(){
    double total = 0.0;
    double max = 0.0;
    double min = 0.0;
    double input = 0.0;
    cout << "Enter 4 double number: " << endl;
    for (size_t i = 0; i < QUARTERS; i++)
    {
        cin >> input;
        if(i == 0){
            max = input;
            min = input;
        }
        if (max > input)
        {
            max = input;
        }
        if (min < input)
        {
            min = input;
        }
        total += input;
        sales[i] = input;
    }
    this
}