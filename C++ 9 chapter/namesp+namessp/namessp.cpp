/*
 * @Author: 崔小葵
 * @Date: 2020-12-11 13:27:57
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-11 13:38:31
 */
// usenamesp.cpp --using namespaces
#include <iostresm>
#include "namesp.h"

void other(void);
void another(void);

int main(){
    using debts::Debt;

    using debts::showDebt;
    Debt golf = {{"Benny"}, {"Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    system("pause");
    return 0;
}

void other(void){
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return;
}

void another(void){
    using pers::Person;
}