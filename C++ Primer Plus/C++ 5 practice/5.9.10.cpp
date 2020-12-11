#include <iostream>

using namespace std;

int main()
{
    unsigned int row;
    cout << "Enter number of rows: ";
    cin >> row;

    for (unsigned int i = 0; i < row; i++)
    {
        for (unsigned int j = 0; j < row - i - 1; j++)
        {
            cout << ".";
        }
        for (unsigned int j = row; j > row - i - 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-9