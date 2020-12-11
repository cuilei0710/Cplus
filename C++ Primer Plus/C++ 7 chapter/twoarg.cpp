/*
 * @Author: 崔小葵
 * @Date: 2020-11-15 14:02:04
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-15 14:07:15
 */
#include <iostream>

using namespace std;

void n_chars(char, int);

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q') // q to quit
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // function with two arguments
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    system("pause");
    return 0;
}

void n_chars(char c, int n) // display c n times
{
    while (n-- > 0) //continue until n reaches 0
    {
        cout << c;
    }
}