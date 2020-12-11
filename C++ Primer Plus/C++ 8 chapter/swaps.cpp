/*
 * @Author: 崔小葵
 * @Date: 2020-11-27 23:34:00
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-27 23:50:35
 */
#include <iostream>

using namespace std;

void swap_r(int & a, int & b); // a, b are aliases for ints
void swap_p(int * p, int * q); // p, q are addresses of ints
void swap_v(int a, int b); // a, b are new variables

int main(){
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using reference to swap contents: \n";
    swap_r(wallet1, wallet2); // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again: \n";
    swap_p(&wallet1, &wallet2); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by values: \n";
    swap_v(wallet1, wallet2); // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    system("pause");
    return 0;
}

void swap_r(int & a, int & b){
    int temp;

    temp = a;
    a = b; // use a, b for values of variables
    b = temp;
}

void swap_p(int * p, int * q){ // use pointers
    int temp;

    temp = *p; // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swap_v(int a, int b){
    int temp;

    temp = a;
    a = b; // use a, b for values of variables
    b = temp;
}