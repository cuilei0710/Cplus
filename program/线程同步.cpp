#include <iostream>
#include <windows.h>
using namespace std;
HANDLE hThread1;        //子线程1的句柄
HANDLE hThread2;        //子线程2的句柄
HANDLE hHandle = NULL;  //主线程子线程通信信号量
HANDLE hHandle1 = NULL; //信号量1的句柄，全局变量
HANDLE hHandle2 = NULL; //信号量2的句柄，全局变量
DWORD WINAPI producer(LPVOID lpParam)
{ //生产者线程
    int i;
    for (i = 0; i < 10; i++)
    {
        WaitForSingleObject(hHandle2, INFINITE);
        Sleep(1000);
        cout << "The producer process is running" << endl;
        ReleaseSemaphore(hHandle1, 1, NULL);
    }
    return 0;
}
DWORD WINAPI consumer(LPVOID lpParam)
{ //消费者线程
    int i;
    for (i = 0; i < 10; i++)
    {
        WaitForSingleObject(hHandle1, INFINITE);
        Sleep(500);
        cout << "The consumer process is running" << endl;
        ReleaseSemaphore(hHandle2, 1, NULL);
    }
    ReleaseSemaphore(hHandle, 1, NULL); //唤醒主线程
    return 0;
}
int main()
{
    DWORD dwThreadID1;
    hHandle = CreateSemaphore(NULL, 0, 1, "Semaphore"); //Semaphore,初值为0

    hHandle1 = CreateSemaphore(NULL, 0, 1, "full"); //创建full信号量,初值为0
    if (hHandle1 == NULL)
        cout << "full Semaphore Create Fail!" << endl;
    else
        cout << "full Semaphore Create Success!" << endl;

    hHandle2 = CreateSemaphore(NULL, 1, 1, "empty"); //创建empty信号量，初值为1
    if (hHandle2 == NULL)
        cout << "empty Semaphore Create Fail!" << endl;
    else
        cout << "empty Semaphore Create Success!" << endl;

    hThread1 = CreateThread(NULL, 0, producer, NULL, 0, &dwThreadID1); //创建子线程
    if (hThread1 == NULL)
        cout << "producer create Fail!" << endl;
    else
        cout << "producer create Success!" << endl;

    hThread2 = CreateThread(NULL, 0, consumer, NULL, 0, &dwThreadID1); //创建子线程
    if (hThread1 == NULL)
        cout << "consumer create Fail!" << endl;
    else
        cout << "consumer create Success!" << endl;

    WaitForSingleObject(hHandle, INFINITE); //主线程等待子线程结束
    cout << "The main function runs" << endl;
    //以下关闭函数
    CloseHandle(hHandle);
    CloseHandle(hHandle1);
    CloseHandle(hHandle2);
    CloseHandle(hThread1);
    CloseHandle(hThread2);
    system("pause");
    return 0;
}