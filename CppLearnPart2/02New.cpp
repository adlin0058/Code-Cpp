#include <iostream>
using namespace std;

// int *func()
// {
//     //new 放到 堆 里
//     int *p = new int(10);
//     return p;
// }

// int main()
// {
//     int *p = func();
//     cout << *p << endl;
//     cout << *p << endl;
//     system("pause");
//     return 0;
// }

// new的基本语法
int *func()
{
    // 在堆创建整型数据
    // new返回的是 改类型的指针
    int *p = new int(10);
    return p;
}

void test1()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    // 堆中的数据由 程序员 开辟、管理、释放
    // 如果想释放堆区的内存 使用 关键字 delete
    delete p;
}

void test2()
{
    int *arr = new int[10]; // 10代表10个数
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    // 释放堆数组    要加[]
    delete[] arr;
}

int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}