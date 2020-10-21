#include <iostream>
using namespace std;
int agesum(int);
int main()
{
    int age;
    cout << "Enter you age: ";
    cin >> age;
    cout << "It means " << agesum(age) << " months." << endl;
    system("pause");
    return 0;
}
int agesum(int n)
{
    return 12 * n;
}
// Author: 崔小葵
// Date: 2020-10-13