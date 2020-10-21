#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    double mile, gallon;
    cout << "Enter the distance in mile you drive: ";
    cin >> mile;
    cout << "Enter the comsumption of oil: ";
    cin >> gallon;
    cout << "Average fuel comsuption: " << mile / gallon << " mile/gallon." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19