#include <iostream>

using namespace std;

const int ArSize = 6;

int main()
{
    float na_aq[ArSize];
    cout << "Enter the NA_AQS (New Age Awareness Quotients) "
         << "of\nyour neighbors. Program terminations "
         << "When you make\n"
         << ArSize << " entries "
         << "or enter a negation value.\n";

    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0)
    {
        na_aq[i] = temp;
        ++i;
        if (i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0)
    {
        cout << "No data--bye\n";
    }
    else
    {
        cout << "Enter your NA_AQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (na_aq[j] > you)
            {
                ++count;
            }
        }
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
             << "the New Age than you do.\n";
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-10