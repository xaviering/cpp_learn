// 结构体定义和使用.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
/*
 *
 *结构体的定义和使用
 *
 *语法，struct 结构体名 {结构体成员列表};
 *
 *通过结构体创建变量的方式有三种：
 *struct 结构体名 变量名
 *struct 结构体名 变量名={成员1值，成员2值.....}
 *定义结构体时顺便创建变量
 *
 */
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
} s3;



int main()
{
	//
	Student s1;
	s1.age = 15;
	s1.name = "zhangsan";
	s1.score = 99;

	Student s2 =
	{
		"lisi",15,100
	};

	s3.age = 48;
	s3.name = "wangwu";
	s3.score = 59;

	cout << s1.name << ":" << s1.age << ":" << s1.score << endl;
	cout << s2.name << ":" << s2.age << ":" << s2.score << endl;
	cout << s3.name << ":" << s3.age << ":" << s3.score << endl;

	/*创建结构体的时候可以省略struct*/

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
