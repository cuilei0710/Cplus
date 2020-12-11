/*
 * @Author: 崔小葵
 * @Date: 2020-11-13 19:00:18
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-13 19:00:18
 */
#include <iostream>

using namespace std;

const int MAX = 5;

int main()
{
    // get data;
    int golf[MAX];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << MAX << " rounds.\n";
    int i;
    for (i = 0; i < MAX; i++)
    {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear(); // reset input
            while (cin.get() != '\n')
            {
                continue; // get rid of bad input
            }
            cout << "Please enter a number: ";
        }
    }
    // calculate average
    double total = 0.0;
    for (i = 0; i < MAX; i++)
    {
        total += golf[i];
    }
    // report results
    cout << total / MAX << " = average score "
         << MAX << " rounds\n";
    system("pause");
    return 0;
}