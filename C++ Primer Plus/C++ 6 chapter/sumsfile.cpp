/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 00:11:39
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-14 00:18:52
 */
#include <iostream>
#include <fstream> // file I/O support
#include <cstdlib> // support for exit()

using namespace std;

const int SIZE = 60;

int main()
{
    char filename[SIZE];
    ifstream infile; // object for handling file input
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    infile.open(filename); // associate infile with a file
    if (!infile.is_open()) // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0; // number of items read

    infile >> value;      // get first value
    while (infile.good()) // while input good and not at EOF
    {
        ++count;         // one more item read
        sum += value;    // calculate running total
        infile >> value; // get next value
    }
    if (infile.eof())
    {
        cout << "End of file reached.\n";
    }
    else if (infile.fail())
    {
        cout << "Input terminated by data mismatch.\n";
    }
    else
    {
        cout << "Input terminated for unknown reason.\n";
    }
    if (count == 0)
    {
        cout << "No data processed.\n";
    }
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    infile.close(); // finished with the file
    system("pause");
    return 0;
}