#include <iostream>

using namespace std;

int max_value(int, int);

int main()
{
    int row = 0, colum = 0, max;
    int a[3][4] = {{5, 12, 23, 56}, {19, 28, 37, 46}, {-12, -34, 6, 8}};
    max = a[0][0];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            max = max_value(a[i][j], max);
            if (max == a[i][j])
            {
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

int max_value(int x, int max)
{
    return x > max ? x : max;
}