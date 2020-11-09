#include <iostream>
#include <cstring>

using namespace std;

struct car
{
    string company;
    int pro_year;
};

int main()
{
    unsigned int SIZE = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> SIZE;
    cin.get();

    struct car *p_car = new struct car[SIZE];
    for (unsigned int i = 0; i < SIZE; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the year make: ";
        getline(cin, p_car[i].company);

        cout << "Please enter the year make: ";
        cin >> p_car[i].pro_year;
        cin.get();
    }
    cout << "Here is your collection: " << endl;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        cout << p_car[i].pro_year << " " << p_car[i].company << endl;
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-9