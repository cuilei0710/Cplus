#include <iostream>

using namespace std;

int main()
{
    int updates = 6;      // declare a variable
    int *p_updates;       // declare pointer to an int
    p_updates = &updates; // assign address of int to pointer

    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express address two ways
    cout << "Addressess: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-27