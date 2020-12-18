//Author: 崔小葵
//Date: 2020-12-18 10:05:38
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-18 10:05:38
#include <iostream>
#include "account.h"

Account::Account(std::string A_name, std::string A_acc, long A_sum){
    this->Account_name = A_name;
    this->Account_acc = A_acc;
    this->Account_sum = A_sum;
}

void Account::ShowAccount(){
    using std::cout;
    using std::endl;
    cout << "Band Account name\t" << Account_name << endl;
    cout << "Band Account num\t" << Account_acc << endl;
    cout << "Band Account balance\t" << Account_sum << endl;
}

Account::Deposit_Account(long deposit){
    this->Account_sum += deposit;
    return 1;
}

Account::Withdraw_Account(long withdraw){
    this->Account_sum -= withdraw;
    return 1;
}