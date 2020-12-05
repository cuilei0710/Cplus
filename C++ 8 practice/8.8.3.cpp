/*
 * @Author: 崔小葵
 * @Date: 2020-12-05 22:33:21
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-05 22:47:49
 */
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string input;

    cout << "Enter a string (q to quit): ";
    getline(cin, input);

    while (input[0] != 'q')
    {
        for (size_t i = 0; i < input.length(); i++)
        {
            input[i] = toupper(input[i]);
        }
        cout << input << endl;

        cout << "Next string (q to quit): ";
        getline(cin, input);
    }
    cout << "Bye!" << endl;
    system("pause");
    return 0;
}