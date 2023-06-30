// const修饰指针
#include <iostream>
using namespace std;
int main()
{
    // 1、常量指针
    /*
    int a = 10;
    int b = 20;
    const int *p = &a;
    //*p = 20; 不可执行
    p = &b; // 可以修改指针指向的地址
    //*p = 100;不可执行
    cout << *p << endl;
    */

    // 2、指针常量
    // 可以修改指向地址内的数据，不能修改指向
    /*
    int a = 10;
    int b = 10;
    int *const p = &a;
    cout << *p << endl;
    *p = 100;
    cout << *p << endl;
    //p = &b; 无法执行
    */

    // 3、修饰指针和常量
    int a = 10;
    int b = 10;
    const int *const p = &a;
    cout << *p << endl;
    // 指向无法修改
    // p = &b;
    // 指向的数据无法修改
    // *p = 100;

    system("pause");
    return 0;
}