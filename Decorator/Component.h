#ifndef  _COMPONENT_H_
#define  _COMPONENT_H_

#include <iostream>

using namespace std;
class component
{
public:
	component();
	virtual ~component();
	virtual void Opreation() = 0;
};
class ConCreateComponent :public component
{
public:
	ConCreateComponent();
	virtual ~ConCreateComponent();

	void Opreation();
};

#endif
