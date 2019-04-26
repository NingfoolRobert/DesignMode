#ifndef _OPERATION_H_
#define _OPERATION_H_

#include "Calculation.h"


class OperationAdd :
	public Calcul
{
public:
	double GetResult()
	{
		double m_dResult = 0;
		m_dResult = GetNumberA() + GetNumberB();
		return m_dResult;
	}
};

class OperationSub :
	public Calcul
{
public:
	double GetResult()
	{
		double m_dResult = 0;
		m_dResult = GetNumberA() - GetNumberB();
		return m_dResult;
	}
};
class OperationMutl :
	public Calcul
{
public:
	double GetResult()
	{
		double m_dResult = 0;
		m_dResult = GetNumberA() * GetNumberB();
		return m_dResult;
	}
};
class OperationDiv :
	public Calcul
{
public:
	double GetResult()
	{
		double m_dResult = 0;
		if (GetNumberB() == 0)
		{
			std::cout << "被除数不能为0" << std::endl;
			exit(1);
		}
		m_dResult = GetNumberA() / GetNumberB();
		return m_dResult;
		//try
		//{
		//	m_dResult = GetNumberA() / GetNumberB();
		//}
		//catch (...)
		//{
		//	std::cout << "被除数不能为0" << std::endl;
		//}
	}

};

#endif // !_OPERATION_H_
