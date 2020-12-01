/*
 * @Author: 崔小葵
 * @Date: 2020-12-01 22:51:23
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-01 23:11:52
 */
 #include <iostream>
//  function template prototype
using namespace std;

template <typename T> // or class T
void Swap(T &a, T &b);

int main(){
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j); // generates void Swap(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Using compiler-generated double swapper:\n";
    Swap(x, y); // generates void Swap(double &, double &)
    cout << "Now x, y = " << x << ", " << y << ".\n";
    // cin.get();
    system("pause");
    return 0;
}

// function template definition
template <typename T> // or class T
void Swap(T &a, T &b){
    T temp; // temp a variable of type T
    temp = a;
    a = b;
    b = temp;
}