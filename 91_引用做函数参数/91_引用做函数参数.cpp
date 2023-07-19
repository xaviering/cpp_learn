// 91_引用做函数参数.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
 *引用做函数参数
 *作用：函数传参时，可以利用引用的技术让形参修饰实参
 *有点可以简化指针修改实参
 *
 */

 //1.值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用的方式传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;


}
//通过引用做参数效果和指针一样，而且更简单
int main()
{
	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a=" << a << ",b=" << b << endl;

	mySwap02(&a, &b);
	cout << "a=" << a << ",b=" << b << endl;

	mySwap03(a, b);
	cout << "a=" << a << ",b=" << b << endl;

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
