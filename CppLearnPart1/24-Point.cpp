// 指针
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    // 创建指针
    //  数据类型 *指针变量名;
    int *p;

    // 让指针记录变量a的地址
    p = &a; //&取地址符
    cout << "a的值为：" << a << endl;
    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl;
    cout << "指针p中地址指向的变量为：" << *p << endl;
    *p = 1000;
    cout << "修改后" << endl;
    cout << "a的值为：" << a << endl;
    cout << "指针p中地址指向的变量为：" << *p << endl;
    // 指针是一个存放地址的变量
    int *p1 = NULL;

    cout << "指针占用的空间" << sizeof(p) << endl;
    system("pause");
    return 0;
}