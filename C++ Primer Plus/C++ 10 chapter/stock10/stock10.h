//Author: 崔小葵
//Date: 2020-12-15 22:45:14
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-15 22:45:14
// stock10.h -- stock class declaration with constructors, destructor added
#ifndef STOCK10_H_
#define STOCK01_H_
#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val;}
public:
// two constructors
    Stock(); // default constructor
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock(); // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double prices);
    void show();
};
#endif