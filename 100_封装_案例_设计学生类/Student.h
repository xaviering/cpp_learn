#pragma once
#include <string>
using namespace std;
class Student
{
public:
	Student();
	~Student();
	void set_name(string name);
	string get_name();
	void set_m_id(int m_id);
	int get_m_id();
	void showinfo();
private:
	string name;
	int m_id;
};
