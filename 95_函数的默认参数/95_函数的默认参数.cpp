// 95_函数的默认参数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//在c++中，参数的形参列表

//函数的默认参数
//如果没有就用默认值
int func(int a = 10, int b = 20, int c = 30)
{
	return a + b + c;

}
//声明和实现只能有一个默认参数
int func2(int a = 10, int b = 20);

int func2(int a, int b)
{
	return a + b;
}
int main()
{
	std::cout << func(10, 20, 30);
	std::cout << func();
	std::cout << func(5);
	std::cout << "Hello World!\n";
	//注意事项，如果一个位置有了默认值，那么后面的参数也必须要默认值
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
