#include <iostream>

using namespace std;

const int ArSize = 16; // example of external declaration

int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-1