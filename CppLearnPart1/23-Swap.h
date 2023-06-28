// 23-MultiFile.cpp的头文件
#include <iostream>
using namespace std;

// 包含Swap函数的定义
void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "交换后为" << endl;
    cout << a << " " << b << endl;
}