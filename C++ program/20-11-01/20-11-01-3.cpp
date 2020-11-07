#include <iostream>

using namespace std;

int main()
{
    char c;
    c = getchar();
    putchar(c + 32);
    cout << endl;
    cin.get();
    putchar( getchar() + 32);
    cout << endl;
    system("pause");
    return 0;
}