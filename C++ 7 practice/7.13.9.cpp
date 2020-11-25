/*
 * @Author: 崔小葵
 * @Date: 2020-11-25 01:02:37
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-25 01:23:29
 */
#include <iostream>

using namespace std;

const int SLEN = 10;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int oop_level;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of students structures and an int representing the
// numbers of elements of the array. the function solicits and
// stores data about students. it terminates input upon filling
// the array or upon encountering a blank line for the student
// name. the function return the actual number of array elements
// filled.
int getinfo(student pa[], int n);

// display1() take a student structure as an argument
// and display its contnets
void display1(student st);

// display2() takes the address of student structure  as an
// argument and dispaly the structure's contents
void display2(const student *ps);

// display3() takes the address of the first element of an array
// of student structure and the number of array element as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n') // This function is to filter '\n'
    {
        continue;
    }
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    system("cls");
    for (size_t i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    system("pause");
    return 0;
}

int getinfo(student pa[], int n)
{
    int Arr_Len = 0;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter the information of student #" << i + 1 << endl;
        cout << "Enter full name (blank line to quit): ";
        cin.getline(pa[i].fullname, SLEN);
        cout << "Enter hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter oop_level: ";
        cin >> pa[i].oop_level;
        while (cin.get() != '\n')
        {
            continue;
        }
        Arr_Len++;
    }
    return Arr_Len;
}

void display1(student st)
{
    cout << "Using display1(student st): " << endl;
    cout << "Full name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Oop_Level: " << st.oop_level << endl;
}

void display2(const student *ps)
{
    cout << "Using display2(const student *ps): " << endl;
    cout << "Full name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Oop_Level: " << ps->oop_level << endl;
}

void display3(const student pa[], int n)
{
    cout << "Using display3(const student pa[], int n): " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Information of student #" << i + 1 << ": " << endl;
        cout << "Full name: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Oop_Level: " << pa[i].oop_level << endl;
    }
}