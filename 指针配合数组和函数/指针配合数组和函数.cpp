// 指针配合数组和函数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void change(int* arr, int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = 0; j < length - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 5, 6, 1, 7, 4, 8, 2, 3, 9, 10 };

	change(arr, 10);

	for (int arr1 : arr)
	{
		std::cout << arr1 << ";";
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
