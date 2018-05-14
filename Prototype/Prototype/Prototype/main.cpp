// Prototype.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Prototype.h"


using namespace  std;

int main()
{
	CPrototype *cpA = new CConcretePrototype;
	/*cpA->SetValue(10);
	cout << cpA->GetValue() << endl;*/
	CPrototype *cpB = cpA->Clone();
	

	delete cpA;
	delete cpB;
    return 0;
}

