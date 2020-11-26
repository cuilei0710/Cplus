/*
 * @Author: 崔小葵
 * @Date: 2020-11-25 22:55:40
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-26 22:38:48
 */
#include <iostream>

using namespace std;

// an inline function definition
inline double square(double x) { return x * x; }

int main(){
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5); // can pass expressions
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    system("pause");
    return 0;
}