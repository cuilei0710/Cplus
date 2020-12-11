//Author: 崔小葵
//Date: 2020-12-11 21:57:28
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-11 21:57:28
#include <cstring>
#include <iostream>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};
char buffer[1024];

int main()
{
    chaff *pacha = new (buffer) chaff[2];
    char *pc = new char[1024];
    chaff *pacha2 = new (pc) chaff[2];
    char dross[20] = {0};
    int slag = 0;

    for (size_t i = 0; i < 2; i++)
    {
        cout << "Enter dross of #" << i << " chaff: " << endl;
        cin.getline(dross, 20);
        cout << "Enter slag of #" << i << " chaff: " << endl;
        cin >> slag;
        cin.get();

        strcpy(pacha[i].dross, dross);
        strcpy(pacha2[i].dross, dross);
        pacha[i].slag = pacha2[i].slag = slag;
    }
    for (size_t i = 0; i < 2; i++)
    {
        cout << "staff #" << (i + 1) << ":" << endl;
        cout << "pacha.dross: " << pacha[i].dross << ". pacha.slag: " << pacha[i].slag << endl;
        cout << "pacha2.dross: " << pacha2[i].dross << ". pacha2.slag:" << pacha2[i].slag << endl;
    }
    cout << "address of buffer: " << (void *)buffer << endl;
    cout << "address of pacha: " << pacha << ". address of pacha[0]: "
         << &pacha[0] << ". address of pacha[1]: " << &pacha[1] << endl;
    cout << "address of pc: " << (void *)pc << endl;
    cout << "address of pacha2: " << pacha2 << ". address of pacha2[0]: "
         << &pacha2[0] << ". address of pacha2[1]: " << &pacha2[1] << endl;
    delete[] pc;
    system("pause");
    return 0;
}