#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string first_name;
    string last_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter you last name: ";
    getline(cin, last_name);

    cout << "Here's the information in a single string: " << last_name
         << ", " << first_name << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31