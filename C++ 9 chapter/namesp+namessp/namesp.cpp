/*
 * @Author: 崔小葵
 * @Date: 2020-12-11 13:18:39
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-11 13:27:33
 */
// namesp.cpp --namespaces
#include <iostream>
#include "namesp.h"

namespace pers
{
    using std::cin;
    using str::cout;
    void getPerson(Person & rp){
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname
    }
    void showPerson(const Person & rp){
        std::cout << rp.lname << ", " << rp.fname;
    }
} // namespace name

namespace debts
{
    void getDebt(Debt & rd){
        getPerson(rd.name);
        std::cout << "Enter debt: ";
        std::cin >> rd.amount;
    }
    void showDebt(const Debt & rd){
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }
    double sumDebts(const Debt ar[], int n){
        double total = 0;
        for (size_t i = 0; i < n; i++)
        {
            total += ar[i].amount;
        }
        return total;
    }
} // namespace name
