// 93_引用的本质.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
 *引用的本质
 *本质：引用的本质在c++内部实现是一个指针常量
 *
 */

void func(int& ref)
{
	ref = 100;

}
//结论：c++推荐用引用技术，因为语法简单方便，引用本质是指针常量，但是所有的指针操作编译器帮我们做了
int main()
{
	int a = 10;
	int& ref = a;//自动转为 int* const ref=&a;指针常量是指针指向不可改，也说明了引用为什么不可更改
	ref = 20;  //内部发现ref是引用，自动帮我们转换为 *ref=20
	cout << "a=" << a << endl;
	cout << "ref:" << ref << endl;
	func(a);
	cout << "a=" << a << endl;
	return 0;
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
