#include <iostream>
using namespace std;
int main()
{
    int chest = 42;   //十进制
    int waist = 0x42; //十六进制
    int inseam = 042; //八进制

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-15