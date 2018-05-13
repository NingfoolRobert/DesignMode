#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>
#include <string>
#include <string.h>

class Calcul
{
private:
	double m_dNumberA;
	double m_dNumberB;
public:
	void SetNumberA(double numA) { m_dNumberA = numA; }
	void SetNumberB(double numB) { m_dNumberB = numB; }
	double GetNumberA() { return m_dNumberA; }
	double GetNumberB() { return m_dNumberB; }
public:
	virtual double GetResult()
	{
		double m_dResult = 0;
		return m_dResult;
	}
};


#endif