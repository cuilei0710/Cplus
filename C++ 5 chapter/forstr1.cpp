#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reverse order
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBYE.\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-3