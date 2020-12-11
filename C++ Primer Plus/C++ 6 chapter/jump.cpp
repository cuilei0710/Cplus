/*
 * @Author: 崔小葵
 * @Date: 2020-11-13 18:30:40
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-13 18:30:40
 */
#include <iostream>

using namespace std;

const int ArSize = 80;

int main()
{
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text:\n";
    cin.get(line, ArSize);
    cout << "Complete line:\n"
         << line << endl;
    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];    // display character
        if (line[i] == '.') // quit if it's a period
        {
            break;
        }
        if (line[i] != ' ') // skip rest of loop
        {
            continue;
        }
        spaces++;
    }
    cout << "\n"
         << spaces << " spaces\n";
    cout << "Done.\n"
         << endl;
    system("pause");
    return 0;
}