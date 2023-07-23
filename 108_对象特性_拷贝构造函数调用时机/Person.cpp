#include "Person.h"
Person::~Person()
{
	cout << "xigou" << endl;

}

Person::Person()
{
	cout << "gouzao" << endl;

}

Person::Person(const Person& p)
{
	this->m_Age = p.m_Age;
	cout << "kaobei" << endl;

}
Person::Person(int age)
{
	cout << "youchan" << endl;

}

