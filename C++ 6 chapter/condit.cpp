/*
 * @Author: 崔小葵
 * @Date: 2020-11-12 17:17:41
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-12 17:19:26
 */
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;
    cout << " is " << c << endl;
    system("pause");
    return 0;
}