#include <iostream>

using namespace std;

int main()
{
    int tom[7], max;
    for (int i = 0; i < 6; i++)
    {
        cin >> tom[i];
    }
    max = tom[0];
    for (int i = 1; i < 6; i++)
    {
        if (tom[i] > max)
        {
            max = tom[i];
        }
    }
    cout << "Max = " << max << endl;
    system("pause");
    return 0;
}