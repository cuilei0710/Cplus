#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0; // use basic input
    cout << "Enter character; enter # to quit:\n";
    cin >> ch;        // get a character
    while (ch != '#') // test the character
    {
        cout << ch; // echo the character
        ++count;    // count the character
        cin >> ch;  // get the next character
    }
    cout << endl
         << count << " characters read\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-7