/*
 * @Author: 崔小葵
 * @Date: 2020-11-21 18:30:51
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-21 18:43:07
 */
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main()
{
    string list[SIZE]; // an array holding 5 string object
    cout << "Enter your " << SIZE << " favourite astronomical signed:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }
    system("cls");
    cout << "Your list:\n";
    display(list, SIZE);

    system("pause");
    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}