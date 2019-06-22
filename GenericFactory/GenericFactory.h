#pragma once

#ifndef GenericFactoryH
#define GenericFactoryH

#include <string>
#include <map>

#define REGISTER_CLASS(BASE_CLASS, DERIVED_CLASS)/
RegisterInpFactory<BASE_CLASS, DERIVED_CLASS> Register##DERIVED_CLASS(#DERIVED_CLASS)

#define CREATE_CLASS(BASE_CLASS,DERIVED_CLASS)/
GenericFactory<BASE_CLASS>::instance().Create(#DERIVED_CLASS)

//---------------------------------------------------------------------------
using  std::string;
using  std::map;

template <class ManufacturedType, typename ClassIDKey = std::string>
class GenericFactory
{
	typedef ManufacturedType* (*BaseCreateFn)();

	typedef std::map<ClassIDKey, BaseCreateFn> FnRegistry;

	FnRegistry registry;

	GenericFactory() {}

	GenericFactory(const GenericFactory&) {}  // û��ʵ��

	GenericFactory &operator=(const GenericFactory&) {} // û��ʵ��

public:
	static GenericFactory& instance()
	{
		static GenericFactory<ManufacturedType, ClassIDKey> bf;
		return bf;
	}

	void RegCreateFn(const ClassIDKey &classname, BaseCreateFn fn)
	{
		registry[classname] = fn;
	}

	ManufacturedType* Create(const ClassIDKey &classname) const
	{
		ManufacturedType* theObject(0);
		FnRegistry::const_iterator regEntry = registry.find(classname);
		if (regEntry != registry.end())
		{
			theObject = regEntry->second();
		}
		return theObject;
	}
};

template <class AncestorType, class ManufacturedType, typename ClassIDKey = std::string>
class RegisterInpFactory
{
public:
	static AncestorType* CreateInstance()
	{
		return (new ManufacturedType);
	}
	RegisterInpFactory(const ClassIDKey &id)
	{
		GenericFactory<AncestorType, ClassIDKey>::instance().RegCreateFn(id, CreateInstance);
	}
};

#endif