// 90_引用的注意事项.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int& b = a;
	//1.注意： 引用必须初始化
	//int &c; 错误的，必须要初始化；
	//2.引用一旦初始化后，就不能更改了
	int c = 20;

	b = c;//赋值操作，而不是更改引用
	cout << a << "," << b << "," << c << endl;


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
