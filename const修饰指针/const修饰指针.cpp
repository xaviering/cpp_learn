// const修饰指针.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*
	 *常量指针
	 *指针的指向可以改
	 *指针指向的值不可以改
	 */
	int a = 1;
	int a2 = 2;
	const int* b = &a;
	b = &a2;
	//*b=5; 错误
	/*
	 * 指针常量
	 */

	int* const c = &a;
	*c = 5;
	//c=&b; 错误 不能修改指针


	/*
	 *即修饰指针，又修饰常量
	 *不可以修改指针的指向，也不能修改指向的值
	 *
	 */

	const int* const d = &a;



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
