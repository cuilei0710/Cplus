//Author: 崔小葵
//Date: 2020-12-18 00:35:14
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-18 00:35:14
// stacker.cpp -- testing the Stack class
#include "stack.h"
#include <cctype> // or ctype.h
#include <iostream>

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order.\n"
         << "P to process a po, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.is_full())
            {
                cout << "stack already full\n";
            }
            else
            {
                st.push(po);
            }
            break;
        case 'P':
        case 'p':
            if (st.isempty())
            {
                cout << "Stack already empty\n";
            }
            else
            {
                st.pop(po);
                cout << "PO #" << po << " popped\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "p to process a po, or Q to quit.\n";
    }
    cout << "Bye!" << endl;
    system("pause");
    return 0;
}