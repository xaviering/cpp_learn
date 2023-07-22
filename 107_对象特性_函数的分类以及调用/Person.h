#pragma once
#include <iostream>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	Person(Person& p);
	Person(int a);
private:
	int a;
};
