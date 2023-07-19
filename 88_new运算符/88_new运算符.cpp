// 88_new运算符.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//1.new的基本语法
using namespace std;
int* func()
{
	//在堆区创建整型数据
	//new 返回的是该数据类型的指针
	int* p = new int(10);
	return p;

}
//在堆区利用new 开辟数组
void test01()
{
	int* p = func();
	cout << *p << endl;
	//堆区的数据由管理员管理开辟，由程序员管理释放
	delete p;

}

//2.在堆区利用new 开辟数组

void test02()
{
	//
	int* arr = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 100 + i;

	}

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << endl;


	}
	delete[] arr; //释放数组的时候需要加   []  才能释放

};


int main()
{
	test01();
	test02();

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
