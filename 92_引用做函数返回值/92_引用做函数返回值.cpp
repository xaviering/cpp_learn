// 92_引用做函数返回值.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量的引用

int& test01()
{
	int a = 10;
	return a;

}

//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后释放
	return a;

}

int main()
{
	int& ref = test01();
	std::cout << ref << std::endl;//第一次结果正确，是因为函数编译器做了保留
	std::cout << ref << std::endl;//第二次结果错误，因为a的内存已经释放

	int& ref2 = test02();
	std::cout << ref2 << std::endl;
	std::cout << ref2 << std::endl;

	test02() = 1000;//如果函数的返回类型是引用，这个函数调用可以作为左值
	std::cout << ref2 << std::endl;
	std::cout << ref2 << std::endl;
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
