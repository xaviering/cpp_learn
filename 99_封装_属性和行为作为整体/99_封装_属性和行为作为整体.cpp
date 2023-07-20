// 99_封装_属性和行为作为整体.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 *c++面向对象的三大特性为 封装，继承，多态
 *c++认为万事万物皆为对象，对象上有其属性和行为
 */

 /*封装的意义：
  *将属性和行为作为一个整体，表现生活中的事物
  *将属性和行为加以权限控制
  *封装的意义：在设计类的时候，属性和行为写在一起
  */


#include <iostream>
#include "Circle.h"

int main()
{
	Circle c1;
	c1.set_m_r(10);

	std::cout << "周长：" << c1.calculateZC();
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
