//Author: 崔小葵
//Date: 2020-12-19 01:19:10
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-19 01:19:10
#include "person.h"
#include <iostream>

int main()
{
    Person one;
    Person two("Statecraft");
    Person three("Dimwits", "Sam");
    one.Show();
    one.FormaiShow();
    std::cout << std::endl;

    two.Show();
    two.FormaiShow();
    std::cout << std::endl;

    three.Show();
    three.FormaiShow();
    std::cout << std::endl;

    system("pause");
    return 0;
}