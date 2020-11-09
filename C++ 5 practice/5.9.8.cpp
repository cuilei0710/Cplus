#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    unsigned int n_word = 0;
    char input[128];

    cout << "Enter words (to stop, type the word done): " << endl;
    while (cin >> input)
    {
        if (strcmp(input, "done"))
        {
            n_word++;
        }
        else
            break;
    }
    cout << "You entered a total of " << n_word << " words. " << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-9