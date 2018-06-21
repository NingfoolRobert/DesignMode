//#pragma once
#ifndef  _THREADPOOL_H_
#define  _THREADPOOL_H_

#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <windows.h>
#include <mutex>
//#include "afxmt.h"

using namespace std;

static mutex m_mutex;

class CThreadPool
{
public:

	static 	CThreadPool* GetInstance();
	
	void AddThread(DWORD dwThreadID, string strThreadName);

	void RemoveThread(DWORD dwThreadID);

	string GetThread(DWORD dwThreadID);

	void PrintAllThread();

private:
	CThreadPool(void);
	~CThreadPool(void);

	 static CThreadPool* m_ThreadPool;
	 map<DWORD, string>m_mapThread;
};


#endif