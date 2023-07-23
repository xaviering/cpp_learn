// 113_类和对象_静态成员.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
 *静态成员就是在成员函数前加上关键字static，成为静态成员
 *静态成员分为：
 *
 *静态成员变量
 *  所有对象共享同一份数据
 *  在编译阶段分配内存
 *  类内声明。类外初始化
 *
 *静态成员函数
 *  所有对象共享同一个函数
 *  静态成员函数只能访问静态成员变量
 */
#include <iostream>

class Person
{
public:
	static int m_A;
	int m_B;
	static void	func()
	{


		std::cout << "static function";
	}
	//静态成员函数和变量也是有访问权限的
private:
	static void	func2()
	{


		std::cout << "static function";
	}
};
void test01()
{
	Person person;
	person.m_A = 150;
	std::cout << person.m_A;
}

void test02()
{
	Person person;
	person.m_A = 894;

	//通过对象进行访问
	std::cout << person.m_A;
	//通过类名进行访问
	std::cout << Person::m_A;
}

void test03()
{
	Person person;
	//通过对象进行访问
	person.func();

	//通过类名进行访问
	Person::func();

}


int main()
{
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
