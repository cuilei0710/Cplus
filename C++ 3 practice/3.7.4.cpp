#include <iostream>

using namespace std;

int main()
{
    const int tran_factor1 = 60;
    const int tran_factor2 = 24;

    long sec;
    int years, hours, minutes, seconds, temp;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    years = int(sec / (tran_factor1 * tran_factor1 * tran_factor2));
    temp = sec % (tran_factor1 * tran_factor1 * tran_factor2);
    hours = int(temp / (tran_factor1 * tran_factor1));
    temp = temp % (tran_factor1 * tran_factor1);
    minutes = int(temp / tran_factor1);
    seconds = int(temp % tran_factor1);
    cout << sec << " seconds = ";
    cout << years << " years, " << hours << " hours,";
    cout << minutes << " minutes," << seconds << " seconds." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19