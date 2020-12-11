#include <iostream>

using namespace std;

int main()
{
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Years built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-21