/*
 * @Author: 崔小葵
 * @Date: 2020-12-09 00:47:36
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-09 01:04:51
 */
#include <iostream>

void oil(int x);

int main()
{
    using namespace std;

    int texas = 11;
    int year = 2011;
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    system("pause");
    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "In oil(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = ";
    cout << &x << endl;
    {
        // start a block
        int texas = 113;
        cout << "In block, texas = " << texas << ", &texas = ";
        cout << &texas << endl;
        cout << "In block, x = " << x << ", &x = ";
        cout << &x << endl;
    } // end a block
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}