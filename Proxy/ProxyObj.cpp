#include "stdafx.h"
#include "ProxyObj.h"


Subject::Subject()
{
}
Subject::~Subject()
{
}

Proxy::Proxy()
{
}
Proxy::~Proxy()
{
}

void Proxy::GiveChocolate()
{
	cout <<  mm.m_strName <<"�����ɿ���" << endl;
}
void Proxy::GiveDolls()
{
	cout << mm.m_strName << "����������" << endl;
}
void Proxy::GiveFlowers()
{
	cout << mm.m_strName << "���㻨" << endl;
}