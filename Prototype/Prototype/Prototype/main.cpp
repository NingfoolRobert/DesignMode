// Prototype.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Prototype.h"


using namespace  std;

int main()
{
	CConcretePrototype *cpA = new CConcretePrototype;
	cpA->SetValue(10);
	cout << cpA->GetVaule() << endl;
	//CConcretePrototype *cpB = cpA->Clone();
	CConcretePrototype * cpB = cpA->Clone();

	cpB->SetValue(9);
	cout << cpB->GetVaule() << endl;

	system("pause");
	delete cpA;
	delete cpB;
    return 0;
}

