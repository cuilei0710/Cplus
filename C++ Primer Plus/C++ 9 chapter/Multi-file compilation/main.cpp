//main.cpp
#include <iostream>
#include "coordin.h"
double warming = 0.3;//应改为外部变量/全局变量的定义声明：double warming = 0.3;

int main()
{
    std::cout << "global warming is " << warming << '\n';
    update(0.1);//更改全局变量的值
    std::cout << "Now global warming is " << warming << '\n';
    local();//同名局部变量隐藏全局变量
    system("pause");
    return 0;
}
