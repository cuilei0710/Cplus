/*
 * @Author: 崔小葵
 * @Date: 2020-11-15 22:58:33
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-15 23:03:42
 */
#include <iostream>
// Note: some implementations reqires double instead of long double

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main()
{
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
         << "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices); // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye!\n"
         << endl;
    system("pause");
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variable
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    return result;
}