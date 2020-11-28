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

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);

int main()
{
    // partial initializations - remaining members set to 0;
    free_throws one = {"Ifelsa branch", 13, 14};
    free_throws two = {"Andot Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};
    // no initialization
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
    // use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);
    // use return value in assignment
    dup = accumulate(team, five);
    std::cout << "Displaying team:\n";
    display(team);
    std::cout << "Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);
    // ill-advised assignment
    accumulate(dup, five) = four;
    std::cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);
    system("pause");
    return 0;
}

void display(const free_throws &ft)
{
    using std::cout;
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws &ft)
{
    if (ft.attempts != 0)
    {
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    }
    else
    {
        ft.percent = 0;
    }
}

free_throws &accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}