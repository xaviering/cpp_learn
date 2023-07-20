// 98_函数重载_注意事项.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//函数重载的注意事项
//引用作为重载条件
//函数重载遇到函数默认参数



#include <iostream>
using namespace std;
void func(int& a)  //func(int &a=10) 不合法。
{
	cout << "int &a";

}

void func(const int& a = 10)//const int &a=10;合法
{
	cout << "const int &a";
}


//函数重载遇到默认参数

void func2(int a = 10)
{
	cout << "func(int a)";

}


void func2(double a = 1.1)
{
	cout << "func(double a)";

}
int main()
{
	const int a = 10;

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
