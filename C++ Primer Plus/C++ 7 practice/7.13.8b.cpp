/*
 * @Author: 崔小葵
 * @Date: 2020-11-24 19:59:05
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-25 00:31:14
 */
#include <iostream>

using namespace std;

void Fill(struct Cost *);
void Show(struct Cost *);

const unsigned int Seasons = 4;
const char *Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct Cost
{
    double expenses[Seasons];
};

int main()
{
    cout << "Situation b: " << endl;
    struct Cost *PCost = new struct Cost;
    Fill(PCost);
    system("cls");
    Show(PCost);
    delete PCost;
    system("pause");
    return 0;
}

void Fill(struct Cost *pstr)
{
    for (size_t i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Sname[i] << " expenses: ";
        cin >> pstr->expenses[i];
    }
}

void Show(struct Cost *pstr)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (size_t i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << ": $" << pstr->expenses[i] << endl;
        total += pstr->expenses[i];
    }
    cout << "Total Expense: $" << total << endl;
}
// In C++, delete operator should only be used either for the pointers pointing to
// the memory allocated using new operator or for a NULL pointer,(new/delete)
// and free() should only be used either for the pointers pointing to
// the memory allocated using malloc() or for a NULL pointer.(free/malloc)