#include "Student.h"

#include <iostream>
using namespace std;
void Student::set_name(string name)
{
	this->name = name;

}

void Student::set_m_id(int m_id)
{
	this->m_id = m_id;
}

string Student::get_name()
{
	return name;

}

int Student::get_m_id()
{
	return m_id;

}

void Student::showinfo()
{
	cout << name << m_id << endl;
}


Student::Student()
{

}



