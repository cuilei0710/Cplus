#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int *pt = new int; // allocate space for an int
    *pt = 1001;        // store a value there

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "Value = " << *pt << ": location " << pt << endl;
    double *pd = new double; // allocate space for a double
    *pd = 10000001.0;        // store a double there

    cout << "double ";
    cout << "Value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-28