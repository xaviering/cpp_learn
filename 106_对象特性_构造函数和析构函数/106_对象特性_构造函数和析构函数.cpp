// 106_对象特性_构造函数和析构函数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 *一个对象或者变量没有初始化，对其使用后果是未知的；
 *同样的使用完一个对象或变量，没有及时清理，也会造成一定的安全问题
 */

 /*
  *如果我们不提供构造和析构，编译器会提供，编译器提供的构造函数和析构函数的实现为空
  */

  /*
   * 构造函数，没有返回值也不写 void
   * 函数名称与类名相同
   * 构造函数可以有参数，因此可以发生重载
   * 程序在调用对象的时候会自动调用构造，无需手动调用，而且只会调用一次
   */

   /*
	*析构函数，没有返回值也不写void
	*函数名和类名相同，在名称前面加上~
	*析构函数不可以有参数，因此不可以发生重载
	*程序在对象销毁前会自动调用析构，无需手动调用，而且只会调用一次
	*/

#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
	Person* person = new Person;
	delete person;
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
