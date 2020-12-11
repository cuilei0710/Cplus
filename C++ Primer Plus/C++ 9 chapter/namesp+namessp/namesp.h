/*
 * @Author: 崔小葵
 * @Date: 2020-12-11 12:32:22
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-11 13:23:55
 */
// namesp.h
#include <string>
// create the pers and debts namespace
namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
} // namespace pers

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
} // namespace debts
