/*
 * @Author: 崔小葵
 * @Date: 2020-11-22 09:11:53
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-22 09:40:15
 */
#include <iostream>

using namespace std;

void GetInput(double *, unsigned int *);
void DispArrray(const double *, const unsigned int);
void Aver_Array(const double *, const unsigned int);

int main()
{
    double grade[10];
    unsigned int enter = 0;
    GetInput(grade, &enter);
    DispArrray(grade, enter);
    Aver_Array(grade, enter);
    system("pause");
    return 0;
}

void GetInput(double *grade, unsigned int *num)
{
    cout << "You can enter up to 10 grades(-1 to quit): " << endl;
    while (cin >> grade[(*num)++])
    {
        if (grade[(*num) - 1] == -1)
        {
            break;
            // Why is this place reduced by one?
            // In fact, we use *num++ in the while function above,
            // so we need to reduce by one here!
        }
    }
    (*num)--; // The difference between actual and formal parameters is 1
}

void DispArrray(const double *grade, const unsigned int num)
{
    cout << "The grade is: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << grade[i] << " ";
    }
    cout << endl;
}

void Aver_Array(const double *grade, const unsigned int num)
{
    double total = 0.0;
    cout << "The average is: ";
    for (int i = 0; i < num; i++)
    {
        total += grade[i];
    }
    cout << total / num << endl;
}