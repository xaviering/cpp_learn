// 94_常量引用.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
 *常量引用
 *作用，常量引用主要用来修饰形参，防止误操作
 *在函数形参列表中，可以交const修饰形参，防止形参改变实参
 */

 //使用场景，用来修饰形参，防止误操作。

void showValue(int& val)
{
	val = 1000;
	cout << val << endl;

}
int main()
{
	int a = 10;
	//int& ref = 10; //引用必修引一块合法的内存空间
	//加上const之后，编译器将代码修改 int temp=10 ;const int &ref=temp
	const int& ref = 10;
	//ref = 20;
	showValue(a);
	cout << a << endl;

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
