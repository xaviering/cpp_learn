// 代码四区_栈区.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
 *栈区的数据注意事项 ---不要返回局部变量的地址
 *栈区的数据由编译器管理开辟和释放
 */

int* func(int b)//形参数据也会放在栈区
{
	int a = 10;//局部变量 存放在栈区。栈区的数据在函数执行完后自动释放

	return &a;//返回局部变量的地址
}

int main()
{
	int* p = func();

	std::cout << "Hello World!\n" << p << std::endl;

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
