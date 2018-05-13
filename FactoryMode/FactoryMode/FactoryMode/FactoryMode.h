#pragma once

#include "Operation.h"

//����ģʽ������
class IFactory
{
public:
	virtual Calcul * CreateOperation() = 0;
};

//�ӷ���
class AddFactory :
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationAdd;
	}
};
//������
class SubFactory :
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationSub;
	}
};
//�˷���
class MutlFactory:
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationMutl;
	}
};
//������
class DivFactory :
	public IFactory
{
public:
	Calcul* CreateOperation()
	{
		return new OperationDiv;
	}
};