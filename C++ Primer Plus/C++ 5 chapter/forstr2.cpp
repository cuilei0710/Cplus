#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        // start block
        temp = word[i];
        word[i] = word[j];
        word[i] = temp;
    } // end block
    cout << word << "\nDone\n";
    system("pause");
    return 0;
}