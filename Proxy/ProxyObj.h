#ifndef  _PROXYOBJ_H_
#define  _PROXYOBJ_H_
#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class  ShcoolGirl
{

public:
	string m_strName;
};
class Subject
{
public:
	Subject();
	virtual ~Subject();

	virtual void  GiveFlowers() = 0;
	virtual void  GiveChocolate() = 0;
	virtual void  GiveDolls() = 0;
};
//class ConCreteSubject :
//	public Subject
//{
//public:
//	ConCreteSubject();
//	~ConCreteSubject();
//	void GiveFlowers();
//	void GiveChocolate();
//	void GiveDolls();
//};

class Proxy :
	public Subject
{
public:
	Proxy();
	~Proxy();

	Proxy(ShcoolGirl mm)
	{
		//this->mm = mm;
		this->mm.m_strName = mm.m_strName;
	}
public:
	void GiveChocolate();
	void GiveDolls();
	void GiveFlowers();
public:
	ShcoolGirl mm;
};

#endif
