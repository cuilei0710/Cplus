#include <iostream>

using namespace std;

const int ArSize = 12;

int main()
{
    string month[ArSize] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "Septempber", "October", "November", "December"};
    unsigned int sales[3][ArSize] = {0};
    unsigned int total_sales[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i + 1 << " year(s) sales of book <C++ for Fools> each month: " << endl;
        for (int j = 0; j < ArSize; j++)
        {
            cout << month[j] << ": ";
            cin >> sales[i][j];
            total_sales[i] += sales[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " year(s) total sales is " << total_sales[i] << endl;
    }
    cout << "Three years total sales is " << total_sales[0] + total_sales[1] + total_sales[2] << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-9