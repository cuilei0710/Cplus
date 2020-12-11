#include <iostream>
#include <cstring>

#define MAX 128

using namespace std;

int main()
{
    char first_name[MAX];
    char last_name[MAX];

    cout << "Enter you first name: ";
    cin.get(first_name, MAX).get();
    cout << "Enter you last name: ";
    cin.getline(last_name, MAX);

    cout << "Here's the information in a single string: " << last_name
         << " " << first_name << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31