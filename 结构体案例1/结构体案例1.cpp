// 结构体案例1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
struct Student {
    string name;

    int score;

};

struct Teacher {
    string name;
    Student stuarr[5];
};

//给老师和学生赋值
void allocateSpace(Teacher tArray[], int len) {
    string Name[] = { "A","B","C","D","E"};
    

    for (int i = 0; i < len; i++)
    {
        tArray[i].name = "teacher_" + Name[i];
        for (int j = 0; j < 5; j++) {
            tArray[i].stuarr[j].name = "student_" + Name[j];
            tArray[i].stuarr[j].score = j;
        }
    }

}

void printInfo(Teacher tArray[],int len) {
 
    for (int i = 0; i < len; i++)
    {
        cout << tArray[i].name;
        for (int j = 0; j < 5; j++) {

            cout << tArray[i].stuarr[j].name << ";" << tArray[i].stuarr[j].score << endl;
        }
    }
}

int main()
{
    Teacher tArray[3];
    //Teacher tea1 = { "老师1",{{"学生1",55},{"学生2",55},{"学生3",55},{"学生4",55},{"学生5",55}} };
   // Teacher tea1 = { "老师2",{{"学生1",66},{"学生2",55},{"学生3",55},{"学生4",55},{"学生5",55}} };
   // Teacher tea1 = { "老师3",{{"学生1",77},{"学生2",55},{"学生3",55},{"学生4",55},{"学生5",55}} };

    int len =sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray,len);
    printInfo(tArray,len);

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
