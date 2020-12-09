/*
 * @Author: 崔小葵
 * @Date: 2020-12-09 17:36:28
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-12-09 17:36:28
 */
// support.cpp -- use external variable
// compile with external.cpp
#include <iostream>
extern double warming; // use warming from another file

// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt)
{
    // modifies global variable
    extern double warming; // optional redeclaration
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degree.\n";
}

void local()
{
    // uses local variable
    double warming = 0.8; // new variable hides external one

    cout << "Local warming = " << warming << " degree.\n";
    // Access global variable with the scope resolution operator
    cout << "But global warming = " << ::warming;
    cout << " degree.\n";
}