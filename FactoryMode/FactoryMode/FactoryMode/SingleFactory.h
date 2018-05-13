#pragma once

#include "Operation.h"

class SingleFactory
{
	static Calcul* CreateOperation(char type)
	{
		Calcul *pOp = nullptr ;
		switch ( type )
		{
		case '+':
			pOp = new OperationAdd;
			return pOp;
		case '-':
			pOp = new OperationSub;
			return pOp;
		case '*':
			pOp = new OperationMutl;
			return pOp;
		case '/':
			pOp = new OperationSub;
			return pOp;
		default:
			break;
		}
	}
};