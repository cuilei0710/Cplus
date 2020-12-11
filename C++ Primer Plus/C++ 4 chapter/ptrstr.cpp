#include <iostream>
#include <cstring> //declare strlen(),strcpy()

int main()
{
    using namespace std;
    char animal[20] = "bear";  // animal holds bear
    const char *bird = "wren"; // bird holds address of string
    // const 是C语言的一个关键字，它限定一个变量不允许被改变，使用const在一定程度上可以提高程序的安全性和可靠性
    char * ps;

    cout << animal << " and "; // display bear
    cout << bird << "\n";      // dispaly wren
    // cout << ps << "\n";        // may dispaly garbage,may cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal; // ok if input < 20 chars
    // cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated space
    ps = animal;         // set ps to point to string
    cout << ps << "!\n"; // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1]; // get new storage
    strcpy(ps, animal);                // copy string to new storage
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete[] ps;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-30