// Decorator.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Decorator.h"
int main()
{
	component *pComponent = new ConCreateComponent();

	ConCreteDecorator *pConCDeco = new ConCreteDecorator();
	pConCDeco->SetComponent(pComponent);
	pComponent->Opreation();
	pConCDeco->addBehavior();

	system("pause");

    return 0;
}

