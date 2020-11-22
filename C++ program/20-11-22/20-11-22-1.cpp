#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    double ex;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) // Selective sorting
    {
        temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[temp] < arr[j])
            {
                temp = j;
            }
        }
        ex = arr[temp];
        arr[temp] = arr[i];
        arr[i] = ex;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}