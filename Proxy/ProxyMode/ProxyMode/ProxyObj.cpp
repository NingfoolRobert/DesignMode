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
	cout <<  mm.m_strName <<"ËÍÄãÇÉ¿ËÁ¦" << endl;
}
void Proxy::GiveDolls()
{
	cout << mm.m_strName << "ËÍÄãÑóÍÞÍÞ" << endl;
}
void Proxy::GiveFlowers()
{
	cout << mm.m_strName << "ËÍÄã»¨" << endl;
}