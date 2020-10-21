#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 2.2E5; //这个数不要超过了int的最大值，否则会报错
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-18