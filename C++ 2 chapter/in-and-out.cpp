#include <iostream>
using namespace std;
int main()
{
    int carrots;
    cout << "How many carrots do you have ? ";
    cin >> carrots;
    cout << "Here are two more, ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-13