#include <iostream>

using namespace std;

void Max_Array(int *a[][], int m, int n);
int row = 0, colum = 0;

int main()
{
    int row = 0, colum = 0, max;
    int a[3][4] = {{5, 12, 23, 56}, {19, 28, 37, 46}, {-12, -34, 6, 8}};
    max = a[0][0];
    Max_Array(a, 3, 4);
    system("pause");
    cout << "MAX : "
         << "a[" << row << "][" << colum << "] = " << max << endl;
    system("pause");
    return 0;
}

void Max_Array(int *a[][], int m, int n)
{
    int max = a[0][0];
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                colum = j;
            }
        }
    }
}