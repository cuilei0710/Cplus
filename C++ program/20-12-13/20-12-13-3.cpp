#include <iostream>

using namespace std;

class Array_max
{
private:
    int array[10];
    int max;

public:
    void set_value();
    void max_value();
    void show_value();
};

void Array_max::set_value()
{
    for (size_t i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
}

void Array_max::max_value()
{
    max = array[0];
    for (size_t i = 1; i < 10; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
}

void Array_max::show_value()
{
    cout << "Max = " << max << endl;
}

int main()
{
    Array_max arrmax;
    arrmax.set_value();
    arrmax.max_value();
    arrmax.show_value();
    system("pause");
    return 0;
}