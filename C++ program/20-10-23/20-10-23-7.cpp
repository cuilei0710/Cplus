#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Please input two nums: ";
    cin >> a >> b;
    cout << a % b << '\n'
         << a / b << '\n'
         << float (a / b) << ' ' << (float) a / b << ' ' << float (a) / b << endl;
    system("pause");
    return 0;
}