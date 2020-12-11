#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double area;
    cout << "Enter the floor area, in square feet, of you home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fanscinating!" << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date： 2020-10-13