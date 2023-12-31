﻿// 108_对象特性_拷贝构造函数调用时机.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
 *c++拷贝构造函数调用实际通常有三种情况
 *  使用一个已经创建完成的对象来初始化一个新对象
 *  值传递的方式给函数参数传值
 *  以值方式返回局部对象
 *
 */
#include <iostream>
#include "Person.h"
#define C 1

void doWork(Person p)
{

}

Person doWord2()
{
	Person p1;
	cout << (int*)&p1 << endl;

	return p1;
}
void test3()
{
	Person p = doWord2();
	cout << (int*)&p << endl;
}
int main()
{
#if A
	//使用一个已经创建完成的对象来初始化一个新对象
	Person p1(10);
	Person p2(p1);
#elif B
	//值传递的方式给函数参数传值
	Person pp1;
	doWork(pp1);
#elif C
	//以值方式返回局部对象

	test3();

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
