#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--) // quits when i is 0
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31