// 常量引用
#include <iostream>
using namespace std;

void showValue(const int &val) // 防止在函数中修改变量的值
{
    // val = 1000;无法修改
    cout << "val = " << val << endl;
}

int main()
{
    int a = 100;
    showValue(a);
    // const修饰引用，使引用可赋值为常量
    const int &ref = 10;

    cout << "a = " << a << endl;
    system("pause");
    return 0;
}