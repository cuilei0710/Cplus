#include <iostream>

using namespace std;

typedef struct PIZZA_INFO
{
    string name;
    double size;
    double weight;
} ST_PIZZA_INFO;

int main()
{
    ST_PIZZA_INFO *pizza_info = new ST_PIZZA_INFO;
    cout << "Enter the pizza company name: ";
    getline(cin, pizza_info->name);

    cout << "Enter the pizza size: ";
    cin >> pizza_info->size;

    cout << "Enter the pizza weight: ";
    cin >> pizza_info->weight;

    cout << "The company name of pizza is " << pizza_info->name << "\n"
         << "The size of the pizza is " << pizza_info->size << "\n"
         << "The weight of pizza is " << pizza_info->weight
         << endl;
    delete pizza_info;

    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31