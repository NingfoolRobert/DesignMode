// CThreadPool.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ThreadPool.h"

DWORD WINAPI Test(LPARAM lparam)
{
	CThreadPool* Thread1 = CThreadPool::GetInstance();
	CThreadPool* Thread2 = CThreadPool::GetInstance();
	//CThreadPool* Thread1 = g_threadPool;
	//CThreadPool* Thread2 = g_threadPool;

	if (Thread1 == Thread2)
	{
		cout << "same " << endl;
	}

	Thread2->AddThread(123, "���춯��");
	Thread2->AddThread(124, "ninhao");

	Thread2->PrintAllThread();
	return 0;
}

DWORD WINAPI Test1(LPARAM lparam)
{
	CThreadPool* Thread1 = CThreadPool::GetInstance();
	CThreadPool* Thread2 = CThreadPool::GetInstance();
	//CThreadPool* Thread1 = g_threadPool;
	//CThreadPool* Thread2 = g_threadPool;

	if (Thread1 == Thread2)
	{
		cout << "same " << endl;
	}

	Thread2->AddThread(127, "���춯��1");
	Thread2->AddThread(126, "ninhao1");

	Thread2->PrintAllThread();
	return 0;
}
int main()
{
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Test, 0, 0, 0);
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Test1, 0, 0, 0);

	system("pause");
    return 0;
}

