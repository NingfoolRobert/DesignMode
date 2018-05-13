#pragma once

#include "Operation.h"

//工厂模式创建类
class IFactory
{
public:
	virtual Calcul * CreateOperation() = 0;
};

//加法类
class AddFactory :
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationAdd;
	}
};
//减法类
class SubFactory :
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationSub;
	}
};
//乘法类
class MutlFactory:
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationMutl;
	}
};
//除法类
class DivFactory :
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationDiv;
	}
};