// 函数提高
// 函数的默认值
#include <iostream>
using namespace std;
int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
}
/*
! 1、如果不是每个参数都有默认参数，默认参数必须放在最后
!                     ↓这一位有，后面都要有
int func1(int a, int b = 10, int c, int d)
{
    return a + b + c + d;
}

*/

//! 2、如果函数的声明有了默认参数，函数的实现不能有默认参数
//! 声明和实现只能有一个有默认参数
// 函数声明
int func3(int a = 10, int b = 20);
// 函数实现                 ↓×
// int func3(int a, int b = 10)
// {
//     return a + b;
// }

//*函数占位参数
void func4(int = 10)
{
    cout << "this is a func" << endl;
}

//! 1、目前占位参数用不到，以后会使用
//! 2、占位参数也可以有默认参数
int main()
{
    func(10);

    // 若没有传入参数则使用默认值
    cout
        << func(10, 30) << endl;

    system("pause");
    return 0;
}