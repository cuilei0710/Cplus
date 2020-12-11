#include <iostream>

using namespace std;

int main(void)
{
    int ch; //should be int, not char
    int count = 0;

    while ((ch = cin.get()) != EOF) // test for end-of-file
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl
         << count << " character read\n";
    system("pause");
    return 0;
}
//Author: 崔小葵
// Date: 2020-11-8