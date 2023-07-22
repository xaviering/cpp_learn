// 107_对象特性_函数的分类以及调用.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 *两种分类方法：
 *  按参数分为：有参构造和无参构造
 *  按类型分为：普通构造和拷贝构造
 *
 *三种调用方式：
 *  括号法
 *  显示法
 *  隐式转换法
 */
#include <iostream>
#include "Person.h"
int main()
{
	//1.括号法
	Person p; //默认构造方法
	Person p2(10);//有参构造方法
	Person p3(p2); //拷贝构造方法
	//注意事项 ，调用默认构造函数的时候，不要加（） 因为编译器会认为是一个函数的声明，不会认为是创建对象。

	//2.显示法
	Person pp1;
	//Person pp2 = Person(10);
	//Person pp3 = Person(pp1);
	Person(10); //匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//注意事项： 不要利用拷贝构造函数 初始化匿名对象 编译器会认为Person会认为 Person（pp3）== Person pp3;;

	//3.隐式转化法

	//Person ppp1 = 10;  相当于写了 Person ppp1=Person（10）；
	//Person ppp2 = ppp1;

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
