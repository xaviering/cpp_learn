// 结构体嵌套结构体.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	Student stu[2];
};
int main()
{
	Teacher teacher = { 1, "wangwu", 45,  {{"zhangsan", 15, 99}, {"lisi", 14, 100}} };
	cout << teacher.stu[0].name << teacher.stu[0].age << teacher.stu[0].score << endl;
	cout << teacher.stu[1].name << teacher.stu[1].age << teacher.stu[1].score << endl;

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
