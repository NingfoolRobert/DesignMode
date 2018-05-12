#ifndef  _DECORATOR_H_
#define  _DECORATOR_H_
#include "Component.h"

class Decorator:
	public component
{
public:
	Decorator();
	virtual ~Decorator();
	virtual void Opreation();

	virtual void SetComponenta(component *comp);

protected:
	component *m_pcomponent;

};

class ConCreteDecorator :
	public Decorator
{
public:
	ConCreteDecorator();

	virtual ~ConCreteDecorator();
public:
	virtual void addBehavior();
};

#endif
