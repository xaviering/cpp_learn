// 110_对象特性_深拷贝与浅拷贝.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 *浅拷贝：简单的赋值拷贝操作
 *深拷贝：在堆区重新申请空间，进行拷贝操作
 *
 */
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	Person() {
		cout << "gouzao" << endl;

	}

	~Person()
	{
		cout << "xigou" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		delete m_Height;

	}

	Person(int age)
	{
		m_Age = age;

	}

	Person(int age, int height)
	{
		m_Age = age;

		m_Height = new int(height);
		cout << "Person(int age, int height)" << endl;

	}

	Person(const Person& person)
	{
		this->m_Age = person.m_Age;
		//this->m_Height = person.m_Height; //编译器默认实现就是这行代码
		m_Height = new int(*person.m_Height);
	}

	int m_Age;
	int* m_Height;
};

void test01() {
	Person p1(18, 160);
	cout << "p1 age" << p1.m_Age << ",height:" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p1 age" << p2.m_Age << ",height:" << *p2.m_Height << endl;

	//浅拷贝带来的问题是内存重复释放
	//解决方法 浅拷贝的问题，要利用深拷贝进行解决
}
int main()
{
	test01();

	std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
