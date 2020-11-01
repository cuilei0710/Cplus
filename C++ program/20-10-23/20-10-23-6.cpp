#include <iostream>

using namespace std;

#define PI 3.1415926

int main()
{
    cout.setf(ios_base::basefield, ios_base::fixed);
    float radius;
    cout << "Please input circle's radius: ";
    cin >> radius;
    cout << "Area = " << PI * radius * radius << endl;
    cout << "Volume = " << (4.0 / 3.0) * PI * radius * radius * radius << endl;
    system("pause");
    return 0;
}