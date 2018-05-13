// Decorator.cpp : 定义控制台应用程序的入口点。
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

