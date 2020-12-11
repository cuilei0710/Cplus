/*
 * @Author: 崔小葵
 * @Date: 2020-11-21 20:09:57
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-21 20:20:47
 */
#include <iostream>

using namespace std;

void countdown(int n);

int main()
{
    countdown(4); // call the recursive function
    system("pause");
    return 0;
}

void countdown(int n)
{
    cout << "Counting down ... " << n << endl;
    if (n > 0)
    {
        countdown(n - 1); // function calls itself
    }
    cout << n << ": Kaboom!\n";
}