#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int ArSize = 20;
    char charr1[ArSize];            //create an empty array
    char charr2[ArSize] = "jaguar"; //create an initialized array
    string str1;                    //create an empty string object
    string str2 = "panther";        //create an initialized string

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << "  "
         << str1 << " " << str2 //use cout for output
         << endl;
    cout << "The third letter in " << str2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl; //use array notation
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-21