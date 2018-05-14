#ifndef  _PROTOTYPE_H_
#define  _PROTOTYPE_H_

#include <iostream>
#include <string>
#include <string.h>

class CPrototype
{
public:
	CPrototype(){}
	virtual ~CPrototype(){}
	virtual CPrototype* Clone() = 0;
};
//Concrete
class CConcretePrototype :
	public CPrototype
{
public:
	CConcretePrototype():m_nCounter(0){}
	virtual ~CConcretePrototype(){}
	//Copy Creater
	CConcretePrototype(const CConcretePrototype &rhs)
	{
		this->m_nCounter = rhs.m_nCounter;
	}
public:
	void SetValue(int m)
	{
		m_nCounter = m;
	}
	int GetVaule()
	{
		return m_nCounter;
	}
	//
	virtual CPrototype *Clone()
	{
		return new CConcretePrototype(*this);
	}
private:
	int m_nCounter;
};

#endif