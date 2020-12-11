#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;
    cin.get(ch);                // attempt to read a char
    while (cin.fail() == false) // test for EOF
    {
        cout << ch; // echo character
        ++count;
        cin.get(ch); // attempt to read another char
    }
    cout << endl
         << count << " character read\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-8