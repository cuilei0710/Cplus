#include <iostream>
using namespace std;
class Student
{        //声明一个类，类名为student
private: //以下声明
    int num;
    double score;

public:
    void setdata()
    {
        cout << "Please input num and score,without comma: ";
        cin >> num;
        cin >> score;
    }
    void display()
    {
        cout << "num = " << num << endl;
        cout << "score = " << score << endl;
    }
};

Student stud1, stud2;

int main()
{
    stud1.setdata();
    stud2.setdata();
    stud1.display();
    stud2.display();
    system("pause");
    return 0;
}