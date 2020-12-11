/*
 * @Author: 崔小葵
 * @Date: 2020-12-05 21:28:12
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-05 21:49:49
 */
#include <iostream>
#include <string>

using namespace std;

void print(char *str, int print_time);

int main()
{
    char str[128];
    int print_time = 0;
    cout << "Enter the string you want to print: " << endl;
    cin.getline(str, 128);
    cout << "Enter how many time you want to print: " << endl;
    cin >> print_time;
    print(str, print_time);
    cout << endl;
    print(str, 1);
    system("pause");
    return 0;
}

void print(char *str, int print_time)
{
    cout << "String: " << str << "\tPrint time: " << print_time << endl;
    if (print_time > 1)
    {
        print_time--;
        print(str, print_time);
    }
}