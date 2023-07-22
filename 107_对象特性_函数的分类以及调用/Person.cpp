#include "Person.h"
Person::Person()
{
	cout << "wuchan gouzao " << endl;

}

Person::Person(int a)
{
	this->a = a;
	cout << "youchan gouzhao" << endl;

}

Person::Person(Person& p)
{
	this->a = p.a;

}

Person::~Person()
{
	cout << "xigou" << endl;

}

