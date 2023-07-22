#pragma once
#include <ostream>
#include <string>
using namespace std;

class Person
{
public:
	string get_m_name() const
	{
		return m_Name;
	}

	void set_m_name(string m_name)
	{
		m_Name = m_name;
	}

	int get_m_age() const
	{
		return m_age;
	}

	void set_m_age(int m_age)
	{
		this->m_age = m_age;
	}

	string get_m_lover() const
	{
		return m_Lover;
	}

	void set_m_lover(string m_lover)
	{
		m_Lover = m_lover;
	}

private:
	string m_Name;
	int m_age;
	string m_Lover;
};
