#pragma once
#include <iostream>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	Person(int age);
	Person(const Person& p);

private:
	int m_Age;
};
