/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 23:53:35
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-14 23:53:35
 */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string FileName;
    ifstream infile;
    unsigned int num = 0;
    char ch = 0;

    cout << "Enter the file name: ";
    getline(cin, FileName);

    infile.open(FileName.c_str());

    while ((ch = infile.get()) != EOF)
    {
        num++;
    }
    cout << "There are " << num << " characters in " << FileName << " file." << endl;
    system("pause");
    return 0;
}