/*
 * @Author: 崔小葵
 * @Date: 2020-11-22 19:48:21
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-22 22:43:17
 */
#include <iostream>

using namespace std;

void InputArray(struct box *, int);
void VolumeArray(struct box *, int);
void OutputArray(struct box *, int);

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

int main()
{
    int n;
    cout << "Please enter n: ";
    cin >> n;
    struct box box_array[n];
    InputArray(&box_array[n], n);
    //Here I am using the address of the array, you can change the value of the array.
    system("cls");
    VolumeArray(&box_array[n], n);
    OutputArray(&box_array[n], n);
    system("pause");
    return 0;
}

void InputArray(struct box *argv, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The " << i + 1 << ":\n"
             << "Box maker: ";
        cin.get();
        cin.getline(argv[i].maker, 40);
        cout << "Box height: ";
        cin >> argv[i].height;
        cout << "Box width: ";
        cin >> argv[i].width;
        cout << "Box length: ";
        cin >> argv[i].length;
    }
}

void VolumeArray(struct box *argv, int n)
{
    for (int i = 0; i < n; i++)
    {
        argv[i].volume = argv[i].height * argv[i].length * argv[i].width;
    }
}

void OutputArray(struct box *argv, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The " << i + 1 << ":\n"
             << "Box maker: ";
        cout << argv[i].maker << "\n"
             << "Box height: "
             << argv[i].height << "\n"
             << "Box width: "
             << argv[i].width << "\n"
             << "Box length: "
             << argv[i].length << "\n"
             << "Box volume: "
             << argv[i].volume << endl;
    }
}
