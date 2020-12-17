//Author: 崔小葵
//Date: 2020-12-18 01:08:07
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-18 01:08:07
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <cstring>
#include <string>

class Account
{
private:
    std::string Account_name;
    std::string Account_num;
    double Accout_sum;
    Account account = {
        "Cui Lei",
        "cuilei0710@",
        "99999999"};

public:
    Account(/* args */);
    ~Account();
    void Set_Account(std::string &A_name, std::string &A_num, double A_sum);
    void Show_Account(const std::string &A_name, const std::string &A_num, const double A_sum);
};

#endif