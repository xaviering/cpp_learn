// 结构体数组.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
	Student studentarr[3] = {
		{"zhangsan", 12, 89},
		{"lisi", 45, 45},
		{"wangwu", 84, 99}
	};

	studentarr[2].age = 88;

	Student* stu = studentarr;


	for (Student student : studentarr)
	{
		cout << student.name << ":" << student.age << ":" << student.score << endl;
	}

	for (int i = 0; i < 3; ++i)
	{
		cout << stu->name << ":" << stu->age << ":" << stu->score << endl;
		stu++;
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
