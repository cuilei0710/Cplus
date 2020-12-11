#include <iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // manipulator for changing number base
    cout << "wasit = " << waist << " (hexadecima for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-17