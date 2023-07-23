// 111_对象特性_初始化列表.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * 语法：构造函数():属性1（值1）,属性2（值2）...{}
 */
#include <iostream>
using namespace std;
class Person
{
public:
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
	Person() :m_A(10), m_B(23), m_C(30) {}
	int m_A;
	int m_B;
	int m_C;
};
void test01()
{
	Person p(10, 20, 30);

}
int main()
{
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
