// 结构体案例2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(Hero hero[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (hero[j].age > hero[j + 1].age)
			{
				Hero tump = hero[j];
				hero[j] = hero[j + 1];
				hero[j + 1] = tump;
			}
		}
	}
}
int main()
{
	Hero heroArray[5] = {
		{"zhangfei",45,"nan"},
		{"guanyu",21,"nan"},
		{"zhaoyun",25,"nan"},
		{"machao",44,"nan"},
		{"huangzhong",41,"nan"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubbleSort(heroArray, len);

	for (Hero hero : heroArray)
	{
		cout << hero.name + "," << hero.age << "," << hero.sex << endl;

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
