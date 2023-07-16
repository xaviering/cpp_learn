﻿// 指针和数组.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	/*
	 *指针和数组
	 *利用指针访问数组中的元素
	 */
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7,8,9,0 };
	int* p = arr;

	cout << "利用指针访问第一个元素" << *p << endl;

	for (int arr1 : arr)
	{
		cout << arr1 << endl;

	}
	int* p2 = arr;
	for (int i = 0; i < 10; ++i)
	{
		cout << *p2 << endl;
		p2++;
	}

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
