#include <iostream>

using namespace std;

const char *qualify[4] =
    {
        "10,000-meter race.\n",
        "mud tug-of-war.\n",
        "masters canoe jousting.\n",
        "pie-throwing festival.\n"};
int main()
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
    {
        index = 0;
    }
    else if (age >= 35 && age < 50)
    {
        index = 1;
    }
    else if (age >= 50 && age < 65)
    {
        index = 3;
    }
    cout << "You qualify for the " << qualify[index];
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-12