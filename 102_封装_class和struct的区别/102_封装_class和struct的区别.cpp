// 102_封装_class和struct的区别.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
 *struct和class的区别
 *        权限不同
 *struct默认权限为公共
 *class默认权限为私有
 */


#include <iostream>
using namespace std;

class C1
{
	int m_A;//默认权限  是私有权限

};

struct C2
{
	int m_A;//默认权限 是公有权限
};


int main()
{
	C1 c1;

	C2 c2;
	c2.m_A = 15;

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
