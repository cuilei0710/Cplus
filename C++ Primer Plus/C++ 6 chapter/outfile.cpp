/*
 * @Author: 崔小葵
 * @Date: 2020-11-13 23:52:30
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-13 23:52:50
 */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outfile;            // create object for output
    outfile.open("carinfo.txt"); // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // display information on screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // now do exact same thing using outfile instead of cout
    outfile << fixed;
    outfile.precision(2);
    outfile.setf(ios_base::showpoint);
    outfile << "Make and model: " << automobile << endl;
    outfile << "Year: " << year << endl;
    outfile << "Was asking $" << a_price << endl;
    outfile << "Now asking $" << d_price << endl;

    outfile.close(); // done with file
    system("pause");
    return 0;
}