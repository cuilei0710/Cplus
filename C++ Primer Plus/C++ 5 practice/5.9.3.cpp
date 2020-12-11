#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int num = 0;

    while (1)
    {
        cout << "Enter a number( 0 to exit): ";
        cin >> num;
        if (num == 0)
        {
            break;
        }
        sum += num;
        cout << "Until now, the sum of the number you inputted is " << sum << endl;
    }
    cout << "Done." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-8