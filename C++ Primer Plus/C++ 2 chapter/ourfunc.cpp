#include <iostream>
using namespace std;
void simon(int);
int main()
{
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done" << endl;
    system("pause");
    return 0;
}
void simon(int n)
{
    cout << "Simon says touth your toes " << n << " times." << endl;
}
// Author: 崔磊
// Date: 2020-10-13