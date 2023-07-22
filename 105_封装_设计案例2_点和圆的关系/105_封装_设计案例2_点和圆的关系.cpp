// 105_封装_设计案例2_点和圆的关系.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cricle.h"
int main()
{
	Cricle cricle;
	cricle.set_m_r(10);
	Point center;
	center.set_m_x(10);
	center.set_m_y(0);
	cricle.set_m_center(center);

	Point p;
	p.set_m_x(10);
	p.set_m_y(10);

	cricle.isInCricle(cricle, p);

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
