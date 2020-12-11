#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;     // execute body
    } while (n != 7); // then test
    cout << "Yes, 7 is my favorite.\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-7