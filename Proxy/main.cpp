// ProxyMode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ProxyObj.h"



int main()
{
	ShcoolGirl Girl ;
	/*ShcoolGirl *sgGirl = new ShcoolGirl;
	Proxy *pDaili = new Proxy(Girl);*/
	Girl.m_strName = "jiaojiao";
	Proxy Dail(Girl);

	Dail.GiveChocolate();
	Dail.GiveDolls();
	Dail.GiveFlowers();
	system("pause");
    return 0;
}

