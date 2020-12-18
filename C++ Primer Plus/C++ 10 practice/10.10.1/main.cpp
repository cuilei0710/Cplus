//Author: 崔小葵
//Date: 2020-12-18 10:27:40
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-18 10:27:40
#include "account.h"
#include <iostream>

using namespace std;

int main()
{
    Account st("Cui Lei", "cuilei0710", 100000);
    st.ShowAccount();
    cout << endl;
    st.Deposit_Account(5000);
    st.ShowAccount();
    cout << endl;
    st.Withdraw_Account(200);
    st.ShowAccount();
    system("pause");
    return 0;
}