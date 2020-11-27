/*
 * @Author: 崔小葵
 * @Date: 2020-11-28 00:02:02
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-28 00:05:58
 */
#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main(){
    system("pause");
    return 0;
}