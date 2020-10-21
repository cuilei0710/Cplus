#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    int degres, minute, second;
    const double tran_factor = 60.0;
    cout << "Enter a latitude in degress, minutes, and seconds\n";
    cout << "First, enter the degress: ";
    cin >> degres;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the second of arc: ";
    cin >> second;
    cout << degres << " degrees," << minute << " minutes," << second << " seconds = ";
    cout << double(degres + minute / tran_factor + second / (tran_factor * tran_factor)) << " degrees." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19