// 97_函数重载基本语法.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 *函数重载概述
 *作用：函数名相同。提高复用性
 *函数重载满足条件
 *同一作用域下
 *函数名称相同
 *函数参数类型不同，或者个数和顺序不同
 *
 *
 *注意：函数的返回值不可以作为函数重载的条件
 */
#include <iostream>
using namespace std;
void func()
{
	cout << "func的调用" << endl;
}
void func(int a)
{
	cout << "int   func的调用" << endl;
}

void func(double a)
{
	cout << "double   func的调用" << endl;
}

void func(double a, int b)
{
	cout << "double   func的调用" << endl;
}

void func(int a, double b)
{
	cout << "double   func的调用" << endl;
}

int main()
{
	func();
	func(1);
	func(3.14);
	func(1.3, 2);
	func(5.66, 1);

	std::cout << "Hello World!\n";

	//注意事项：函数的返回值不可以作为函数重载的条件
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
