#include <iostream>

using namespace std;

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get(); //read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << "\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-21
// cin.getline(a,int) = cin.get(a,int).get();