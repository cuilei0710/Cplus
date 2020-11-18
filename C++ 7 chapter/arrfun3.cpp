/*
 * @Author: 崔小葵
 * @Date: 2020-11-16 11:47:29
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-16 12:07:48
 */
#include <iostream>

using namespace std;

const int MAX = 5;
// function prototypes

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); // don't change data
void revalue(double r, double ar[], int n);

int main()
{
    double properties[MAX];

    int size = fill_array(properties, MAX);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    system("pause");
    return 0;
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) // signal terminate
        {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

// the following function can use, but no alter,
// the array whose address is ar
void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each elemEnt of ar[] by r
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] *= r;
    }
}