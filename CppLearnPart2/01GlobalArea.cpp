#include <iostream>
using namespace std;

// 在main函数外定义的变量为全局变量
int g_a = 10;
int g_b = 20;

const int c_g_a = 10;

int main()
{
    // 局部变量
    int a = 10;
    int b = 20;

    cout << "局部变量a的地址：" << (long long int)&a << endl;
    cout << "局部变量b的地址：" << (long long int)&b << endl;

    cout << "全局变量a的地址：" << (long long int)&g_a << endl;
    cout << "全局变量b的地址：" << (long long int)&g_b << endl;

    // 静态变量 在普通变量前加static
    static int s_a = 10;
    static int s_b = 20;
    // 静态变量 也放在 全局区
    cout << "静态变量a的地址：" << (long long int)&s_a << endl;
    cout << "静态变量b的地址：" << (long long int)&s_b << endl;

    // 常量
    // 字符串常量
    cout << "字符串常量的地址："
         << (long long int)&"helloworld" << endl;

    // const修饰的变量
    const int c_a = 10;
    cout << "const修饰全局变量的地址：" << (long long int)&c_g_a << endl;
    cout << "const修饰局部变量的地址：" << (long long int)&c_a << endl;

    // 只要有局部 就不放在 全局区
    system("pause");
    return 0;
}