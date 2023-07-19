// 内存四区_代码区.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
    代码区：存放函数体的二进制代码，由操作系统进行管理
    全局区：存放全局变量和静态变量以及常量
    栈区：由编译器自动释放，存放函数的参数值，局部变量等
    堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
*/
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
