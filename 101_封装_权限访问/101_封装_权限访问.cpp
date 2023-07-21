// 101_封装_权限访问.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
 *访问权限有三种
 *private 私有权限    成员类内可以访问，类外不可以访问
 *protected 保护权限  成员类内可以访问，类外不可以访问 儿子也可以访问父亲中的保护内容
 *public 公共权限 成员类内可以访问，类外可以访问
 */
#include <iostream>
#include "Person.h"
int main()
{
	Person p1;
	p1.name = "haha";
	p1.func();

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
