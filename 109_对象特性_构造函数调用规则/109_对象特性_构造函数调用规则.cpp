// 109_对象特性_构造函数调用规则.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
 *默认情况下，c++编译器至少给一个类添加3个函数
 *1.默认构造函数（无参，函数体为空）
 *2.默认析构函数（无参，函数体为空）
 *3.默认拷贝构造函数，对属性进行值拷贝
 */

 /*
  *构造函数调用规则如下
  * 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
  * 日过用户定义拷贝构造函数，c++不会再提供其他构造函数
  */
#include <iostream>
#include "Person.h"
#define  B 1
int main()
{

#if A
	Person p;
	p.m_Age = 18;
	Person p2(p);
	cout << "p2 age :" << p2.m_Age << endl;

#elif B
	Person P;
#elif C

#endif



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
