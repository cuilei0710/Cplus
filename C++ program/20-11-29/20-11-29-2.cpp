#include <iostream>

using namespace std;

int main()
{
    int row = 0, colum = 0, max;
    int a[3][4] = {{5, 12, 23, 56}, {19, 28, 37, 46}, {-12, -34, 6, 8}};
    max = a[0][0];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                colum = j;
            }
        }
    }
    cout << "MAX : "
         << "a[" << row << "][" << colum << "] = " << max << endl;
    system("pause");
    return 0;
}