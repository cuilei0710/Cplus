#include <iostream>

using namespace std;

int main()
{
    double Cleo_value = 100, Daphne_value = 100;
    int count = 0;
    while (Cleo_value >= Daphne_value)
    {
        count++;
        Cleo_value += 10;
        Daphne_value = Daphne_value + Daphne_value * 0.05;
    }
    cout << "After " << count << " years. "
         << "Cleo account which is "
         << Cleo_value << " will more than Daphne account which is "
         << Daphne_value << "." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-8