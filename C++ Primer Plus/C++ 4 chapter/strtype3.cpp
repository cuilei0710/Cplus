#include <iostream>
#include <string>  //make string class available
#include <cstring> //C-style string library

#define MAX 20

using namespace std;

int main()
{
    char charr1[MAX];
    char charr2[MAX] = "jaguar";
    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays;
    str1 = str2;            // copy str2 to str1
    strcpy(charr1, charr2); // copy charr2 to charr1

    // appending for string objects and character arrays;
    str1 += " paste";         // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1

    // finding the length of a string object and a C-style string
    int len1 = str1.size();    // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1

    cout << "The string " << str1 << " contains "
         << len1 << " character.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " character.\n";
    system("pause");
    return 0;
}
// AUthor: 崔小葵
// Date: 2020-10-26