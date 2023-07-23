
#include "Person.h"

Person::Person()
{
	cout << "wucan gouzao" << endl;

}

Person::~Person()
{
	cout << "xigou" << endl;

}

Person::Person(int age)
{
	cout << "youcan gouzao" << endl;

}
Person::Person(const Person& p)
{
	this->m_Age = p.m_Age;
	cout << "kaobei gouzao" << endl;
}



