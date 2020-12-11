/*
 * @Author: 崔小葵
 * @Date: 2020-12-05 21:56:12
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-05 22:52:34
 */
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

#define ArSize 128

void Fill_Bar(struct CandyBar &candybar, char *B_N, double W, int H);
void Display_Bar(const CandyBar &candybar);

struct CandyBar
{
    char Brand_name[ArSize];
    double weight;
    int heat;
};

int main()
{
    struct CandyBar candybar = {" "};
    char Bar_name[ArSize];
    double Bar_weight;
    int Bar_heat;

    cout << "Please enter the name of CandyBar: " << endl;
    cin.getline(Bar_name, ArSize);
    cout << "Please enter the weight of CandyBar: " << endl;
    cin >> Bar_weight;
    cout << "Please enter the heat of CandyBar: " << endl;
    cin >> Bar_heat;
    Fill_Bar(candybar, Bar_name, Bar_weight, Bar_heat);
    system("cls");
    cout << "The input is completeed!!!\n";
    Display_Bar(candybar);
    system("pause");
    return 0;
}

void Fill_Bar(struct CandyBar &candybar, char *B_N, double W, int H)
{
    strcpy(candybar.Brand_name, B_N);
    candybar.weight = W;
    candybar.heat = H;
}

void Display_Bar(const CandyBar &candybar)
{
    cout.setf(ios::right, ios::adjustfield);
    cout << setw(25) << "CandyBar Brand name: \t\t\t" << candybar.Brand_name << endl;
    cout << setw(25) << "CandyBar Weight: \t\t\t" << candybar.weight << endl;
    cout << setw(25) << "CandyBar Heat: \t\t\t" << candybar.heat << endl;
}