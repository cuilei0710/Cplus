#include <iostream>

using namespace std;

int main()
{
    int auks, bats, coots;
    //the following statement adds the values as double,
    //then converts the result to int
    auks = 19.99 + 11.99;

    //these statements add values as int
    bats = (int)19.99 + (int)11.99;  //old C syntax
    coots = int(19.99) + int(11.99); //new C++ sytax
    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ",
        cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-18