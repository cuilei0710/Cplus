#include <iostream>

using namespace std;

int main()
{
    cout << "The Amazing Account will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed: ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Account bids you adieu!\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-3