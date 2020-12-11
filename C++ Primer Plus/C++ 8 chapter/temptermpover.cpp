/*
 * @Author: 崔小葵
 * @Date: 2020-12-05 20:13:20
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-05 20:58:42
 */
#include <iostream>

using namespace std;

template <typename T> // template A
void ShowArray(T arr[], int n);

template <typename T> // template B
void ShowArray(T *arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 301, 310, 130};
    struct debts mr_E[3]{
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby stout", 1800.0}};
    double *pd[3];

    // set pointers to the amount members of the structtures in mr_E
    for (size_t i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    cout << "Listing Mr. E's debts:\n";
    // things is an array of int
    ShowArray(things, 6); // uses template A
    cout << "Listing Mr. E's debts:\n";
    // pd is an array of pointers to double
    ShowArray(pd, 3); // uses template B (more specialized)
    system("pause");
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "template A\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template <typename T>
void ShowArray(T *arr[], int n)
{
    cout << "template B\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << *arr[i] << ' ';
    }
    cout << endl;
}