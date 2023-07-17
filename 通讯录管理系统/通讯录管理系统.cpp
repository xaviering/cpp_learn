// 通讯录管理系统.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
#define  MAX 1000;

struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;

};

struct AddressBooks
{
	Person personArray[MAX];
	int m_Size;

};
void showMenu()
{
	cout << "通讯录菜单目录" << endl;
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;

}

int main()
{
	showMenu();

	while (true)
	{
		int select;
		cin >> select;

		switch (select)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			return 0;
			break;

		default:break;
		}
	}
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
