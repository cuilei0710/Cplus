/*
 * @Author: 崔小葵
 * @Date: 2020-11-15 09:17:52
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-15 09:17:52
 */
#include <iostream>

using namespace std;

void simple(); // function prototype

int main()
{
    cout << "main() will call the simple() function:\n";
    simple(); // function call;
    cout << "main() is finished with the simple() function.\n";
    system("pause");
    return 0;
}

// function definition
void simple()
{
    cout << "I'm but a simple function.\n";
}