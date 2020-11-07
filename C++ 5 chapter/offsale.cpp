#include <iostream>

#define MAX 50

int main()
{
    using namespace std;
    int n, m;
    double a[MAX];
    cout << "Please enter a few to modify: ";
    cin >> n;
    cout << "Please enter the nums: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "How much do you want to discount(%): ";
    cin >> m;
    for (double &x : a)
        x = x * (100 - m) / 100;
    cout << "Now, price are: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-7