#include <iostream>

using namespace std;

class Box
{
private:
    int height;
    int width;
    int length;

public:
    Box(int, int, int);
    int volume();
};

Box::Box(int h, int w, int len)
{
    height = h;
    width = w;
    length = len;
}

int Box::volume()
{
    return (height * width * length);
}

int main()
{
    int a, b, c;
    cout << "Input a, b, c: ";
    cin >> a >> b >> c;
    Box box(a, b, c);
    cout << "The volume of box1 is " << box.volume() << endl;
    system("pause");
    return 0;
}