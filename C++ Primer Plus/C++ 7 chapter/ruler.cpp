/*
 * @Author: 崔小葵
 * @Date: 2020-11-22 07:01:09
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-22 07:16:51
 */
#include <iostream>

using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level);

int main()
{
    char ruler[Len];
    int i;
    for (i = 0; i < Len - 2; i++)
    {
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;
    for (i = 0; i <= Divs; i++)
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 0; j < Len - 2; j++)
        {
            ruler[j] = ' '; // reset to blank ruler
        }
    }
    system("pause");
    return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)
    {
        return;
    }
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}