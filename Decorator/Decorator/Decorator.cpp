#include "stdafx.h"
#include "Decorator.h"

Decorator::Decorator()
{
}

Decorator::~Decorator()
{
}

void Decorator::Opreation()
{
	m_pcomponent->Opreation();
}
void Decorator::SetComponenta(component *comp)
{
	this->m_pcomponent = comp;
}
//ConCreteDecorator
ConCreteDecorator::ConCreteDecorator()
{
}
ConCreteDecorator::~ConCreteDecorator()
{
}

void ConCreteDecorator::addBehavior()
{
	cout << "ConCreteDecorator :addBehavior" << endl;
}