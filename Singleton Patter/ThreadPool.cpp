#include "stdafx.h"
#include "ThreadPool.h"
 

CThreadPool* CThreadPool::m_ThreadPool = NULL;
//CThreadPool* g_threadPool = NULL;

CThreadPool::CThreadPool(void)
{
	//m_ThreadPool = this;
}
CThreadPool::~CThreadPool(void)
{
}

CThreadPool* CThreadPool::GetInstance()
{
	if (NULL == m_ThreadPool)
	{
		m_mutex.lock();
		if (NULL == m_ThreadPool)
		{
			m_ThreadPool = new CThreadPool;
		}
		m_mutex.unlock();
	}

	return m_ThreadPool;

}

void CThreadPool::AddThread(DWORD dwThreadID, string strThreadName)
{
	if (0 == dwThreadID || 0 == strThreadName.length())
	{
		cout << " AddThread fail : dwThread = " << dwThreadID << ",ThreadName.length = " << strThreadName.length() << endl;
		return;
	}
	map<DWORD, string>::iterator it_thread = m_mapThread.find(dwThreadID);
	if (it_thread != m_mapThread.end())
	{
		if (!strcmp((it_thread->second.c_str()),strThreadName.c_str()))
		{
			cout << "It exited" << endl;
			return;
		}
	}
	m_mapThread[dwThreadID] = strThreadName;
}

void CThreadPool::RemoveThread(DWORD dwThreadID)
{
	if (0 == dwThreadID)
	{
		cout << " ThreadID error: " << dwThreadID << endl;
		return;
	}
	map<DWORD, string>::iterator it = m_mapThread.find(dwThreadID);
	if (it != m_mapThread.end())
	{
		m_mapThread.erase(dwThreadID);
	}
	else
	{
		cout << " no find: " << dwThreadID << endl;
	}

}

string CThreadPool::GetThread(DWORD dwThreadID)
{
	if (0 == dwThreadID)
	{
		cout << "ThreadID error: " << dwThreadID << endl;
		return "";
	}
	map<DWORD, string>::iterator it = m_mapThread.find(dwThreadID);
	if (it != m_mapThread.end())
	{
		return it->second;
	}
	else
	{
		cout << "no find" << endl;
		return "";
	}
}

void CThreadPool::PrintAllThread()
{
	m_mutex.lock();
	map<DWORD, string>::iterator it = m_mapThread.begin();
	cout << "ThreadID:" << '\t' << "ThreadName" << endl;
	for (; it != m_mapThread.end(); it++)
	{
		cout << '\t' << it->first << ":\t"<< it->second << endl;
	}
	m_mutex.unlock();
}

