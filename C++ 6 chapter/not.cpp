#include <iostream>
#include <climits>

using namespace std;

bool is_int(double);

int main()
{
    double num;
    cout << "Yo, dude! Enter an interger value: ";
    cin >> num;
    while (!is_int(num))
    {
        cout << "Out of range -- Please try again: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You've entered the integer " << val << "\nBye\n";
    system("pause");
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN) // use climits values
    {
        return true; // int max is 2^15 - 1
    }
    else
    {
        return false;
    }
}
// Author: 崔小葵
// Date: 2020-11-12