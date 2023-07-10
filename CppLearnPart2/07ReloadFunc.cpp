// 函数重载
#include <iostream>
using namespace std;

void func()
{
    cout << "func" << endl;
}
void func(int a)
{
    cout << "func(int a)" << endl;
}

//! 函数重载注意事项
// 1、引用作为重载的条件
void func1(int &a) // int &a = 10;不合法
{
    cout << "func1(int &a)调用" << endl;
}

void func1(const int &a) // const int &a = 10;合法
{
    cout << "func1(const int &a)调用" << endl;
}

// 2、函数重载遇到默认参数
//! 重载时尽量避免使用默认参数
void func2(int a, int b = 10)
{
    cout << "func2(int a,int b)" << endl;
}
void func2(int a)
{
    cout << "func(int a)调用" << endl;
}

int main()
{
    // func();
    // func(1);

    // int a = 10;
    // func1(a);

    // func1(10);

    // func2(10);
    //! 错误，默认参数使函数重载出现二义性
    system("pause");
    return 0;
}