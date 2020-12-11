/*
 * @Author: 崔小葵
 * @Date: 2020-12-11 13:27:57
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-11 16:36:58
 */
// usenamesp.cpp --using namespaces
#include "namesp.h"
#include <iostream>

void other(void);
void another(void);

int main()
{
    using debts::Debt;

    using debts::showDebt;
    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    system("pause");
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return;
}

void another(void)
{
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}