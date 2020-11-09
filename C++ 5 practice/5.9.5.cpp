#include <iostream>
#include <string>

using namespace std;

const int ArSize = 12;

int main()
{
    const char *month[ArSize] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "Septempber", "October", "November", "December"};
    int sell[ArSize];
    int total_sales = 0;

    cout << "Enter the sales of book <C++ for Fools> each month: " << endl;
    for (int i = 0; i < ArSize; i++)
    {
        cout << month[i] << ": ";
        cin >> sell[i];
        total_sales += sell[i];
    }
    cout << "The total sales is " << total_sales << endl;
    for (int i = 0; i < ArSize; i++)
    {
        cout << month[i] << ": " << sell[i] << endl;
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-9