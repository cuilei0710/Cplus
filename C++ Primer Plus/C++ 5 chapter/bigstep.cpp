#include <iostream>

int main()
{
    using std::cin;
    using std::cout; // a using declaration
    using std::endl;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-1