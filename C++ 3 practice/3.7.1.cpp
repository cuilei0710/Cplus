#include <iostream>

using namespace std;

int main()
{
    const int tran_factor = 12;
    int inches;
    cout << "Please Enter your height.(inch): ___\b\b\b";
    cin >> inches;
    cout << "You're " << inches / tran_factor << " feet ";
    cout << inches % tran_factor << " inches tall." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19