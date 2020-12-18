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
    std::string Account_acc;
    long Account_sum;

public:
    Account(/* args */){}
    Account(std::string A_name, std::string A_acc, long A_sum);
    void ShowAccount();
    int Deposit_Account(long deposit);
    int Withdraw_Account(long withdraw);
};

#endif