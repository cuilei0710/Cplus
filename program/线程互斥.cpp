#include <iostream>
#include <windows.h>
using namespace std;
static int count = 0; //共享变量
static HANDLE h1, h2; //两个子线程的句柄变量
HANDLE g_hMutex;	  //互斥信号量句柄，用于诸线程互斥访问缓冲区

void func2()
{
	int i,r2;
	for(i=0;i<10;i++)
	{
		r2=count;
		r2=r2+1;
		Sleep(3);
		count=r2;
		WaitForSingleObject(g_hMutex,INFINITE);
		cout<<"count in func2="<<count<<endl;
		ReleaseMutex(g_hMutex);
	}
}

void func1()
{
	int r1,i;
	for(i=0;i<10;i++)
	{
		r1=count;
		r1=r1+1;
		Sleep(1);
		count=r1;
		WaitForSingleObject(g_hMutex,INFINITE);
		cout<<"count in func1="<<count<<endl;
		ReleaseMutex(g_hMutex); //退出临界区
	}
}

//主线程的实现
int main()
{
	DWORD dwThreadID1, dwThreadID2;
	g_hMutex = CreateMutex(NULL, FALSE, NULL); //创建互斥信号量
	//创建子线程func1
	h1 = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)func1, NULL, 0, &dwThreadID1);
	if (h1 == NULL)
		cout << "Thread1 create Fail!" << endl;
	else
		cout << "Thread1 create success!" << endl;

	//创建子线程func2
	h2 = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)func2, NULL, 0, &dwThreadID2);
	if (h1 == NULL)
		cout << "Thread2 create Fail!" << endl;
	else
		cout << "Thread2 create success!" << endl;
	Sleep(2000);
	CloseHandle(h1);
	CloseHandle(h2);
	CloseHandle(g_hMutex);
	system("pause");
	ExitThread(0);
}
