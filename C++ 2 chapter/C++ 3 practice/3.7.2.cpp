#include <iostream>

using namespace std;

int main()
{
    int feet, inches;
    double pounds;
    const int tran_factor1 = 12;
    const double tran_factor2 = 0.0254;
    const double tran_factor3 = 1 / 2.2;

    cout << "Please Enter your height(feet an inches): ";
    cin >> feet >> inches;
    cout << "Please Enter your weight(pounds): ";
    cin >> pounds;
    cout << "You BMI is " << double((feet * tran_factor1 + inches) * tran_factor2 / pounds * tran_factor3);
    cout << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19