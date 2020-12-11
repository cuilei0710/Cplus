#include <iostream>

using namespace std;

int main()
{
    long long world_pop, us_pop;
    cout << "Enter the world's population: ";
    cin >> world_pop;
    cout << "Enter the population of the US: ";
    cin >> us_pop;
    double rate = double(us_pop) / world_pop;
    cout << "The population of the US is " << rate * 100.0;
    cout << "% of the world population." << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19