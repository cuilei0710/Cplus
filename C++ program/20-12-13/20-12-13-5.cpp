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
    Box box1(1, 2, 3);
    cout << "The volume of box1 is " << box1.volume() << endl;
    Box box2(4, 5, 6);
    cout << "The volume of box2 is " << box2.volume() << endl;
    system("pause");
    return 0;
}