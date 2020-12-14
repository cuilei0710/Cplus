#include <iostream>

using namespace std;

const int Fave = 27;

int main()
{
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favourite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
        {
            cout << "Too low -- guess again: ";
        }
        else if (n > Fave)
        {
            cout << "Too high -- guess again: ";
        }
        else
        {
            cout << Fave << " is right!\n";
        }
    } while (n != Fave);
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-10