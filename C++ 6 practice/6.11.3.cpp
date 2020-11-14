/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 17:17:31
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-14 17:22:18
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char ch = 0;

    cout << "Please enter one of the following choices: " << endl;
    cout.flags(ios::left);
    cout << setw(20) << "c) carnivore"
         << "p) pianist" << endl;
    cout << setw(20) << "t) tree"
         << "g) game" << endl;
    bool exit = false;

    while (cin >> ch && !exit)
    {
        switch (ch)
        {
        case 'c':
            cout << "Tiger is a carnivore." << endl;
            exit = true;
            break;
        case 'p':
            cout << "Langlang is a pianist." << endl;
            exit = true;
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            exit = true;
            break;
        case 'g':
            cout << "LOL is a game." << endl;
            exit = true;
            break;
        default:
            cout << "Please enter a c, p, t or g: ";
            break;
        }
    }
    system("pause");
    return 0;
}