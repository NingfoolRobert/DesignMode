/** 
 * Copyright (C) 2020 xxx.
 * 
 * Unpublished copyright. All rights reserved. This material contains
 * proprietary information that should be used or copied only within
 * xxx, except with written permission of xxx.
 * 
 * @file:xxxSingleton.h
 * @brief:xxxSingleton 
 * @author:xxxSingletonnbf,nbf0537@163.com
 * @version:com 1.0
 * @date:com2020-03-21
 */

#pragma once 

#include <stdio.h> 
#include <stdlib.h> 
#include <forward_list> 



template<class T>
class CSingleton
{
public:
	template<typename... Args>
	static T* Instance(Args&&... args)
	{
		if(nullptr == m_pInstance)
		{
			m_pInstance = new T(std::forward<Args>(args)...);
		}

		return m_pInstance;
	}
	
	static T* GetInstance()
	{
		if(nullptr == m_pInstance)
			throw std::logic_error("the instance  is not init, please initialize the instance first");

		return m_pInstance;
	}

	static void DestoryIntance()
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
private:
	CSingleton();
	virtual ~CSingleton();
	CSingleton(const CSingleton&);
	CSingleton& operator=(const CSingleton&);
private:
	static T*		m_pInstance;
};
