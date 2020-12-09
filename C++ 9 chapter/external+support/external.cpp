/*
 * @Author: 崔小葵
 * @Date: 2020-12-09 17:28:09
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-09 17:44:10
 */
// external.cpp -- external variable
// compile with support.cpp

#include <iostream>

using namespace std;

// external variable
double warming = 0.3; // warning defined
// function prototypes
void update(double dt);
void local();

int main()
{
    // uses global variable
    cout << "Global warming is " << warming << " degree.\n";
    update(0.1); // call function to change warming
    cout << "Global warming is " << warming << " degree.\n";
    local(); // call function with local warming
    cout << "Global warming is " << warming << " degree.\n";
    system("pause");
    return 0;
}