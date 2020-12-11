//file1.cpp
#include <iostream>
#include "coordin.h"
extern double warming;//引用声明

void update(double x)
{
    warming += x;
}

void local()
{
    double warming = 1.2;//隐藏全局变量warming
    std::cout << "local warming is " << warming << '\n';
    std::cout << "But global warming is " << ::warming << '\n';//::是作用域解析运算符，表示使用变量的全局版本
}