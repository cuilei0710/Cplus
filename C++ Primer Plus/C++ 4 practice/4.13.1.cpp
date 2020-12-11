#include <iostream>

#define MAX 128

using namespace std;

int main()
{
    char first_name[MAX];
    char last_name[MAX];
    char degree;
    int age;

    cout << "What is your first name? ";
    cin.getline(first_name, MAX);

    cout << "What is your last name? ";
    cin.getline(last_name, MAX);

    cout << "What letter grade do you deserve? ";
    cin >> degree;

    cout << "What is you age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(degree + 1) << endl;
    cout << "Age: " << age << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31