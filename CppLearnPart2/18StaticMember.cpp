#include <iostream>
using namespace std;

// 1、所有对象公用一份数据
// 2、编译阶段分配内存
// 3、类内声明，类外初始化

class Person
{
public:
    // 类内声明
    static int m_A;

    static void func()
    {
        m_A = 300;
        cout << "static void func()" << endl;
    }
};
// 类外初始化
int Person::m_A = 100;

void test1()
{
    Person p;
    cout << p.m_A << endl;
    Person p1;
    p1.m_A = 200;
    // 所有对象共用一份数据
    cout << p.m_A << endl;
}

void test2()
{
    // 静态成员变量两种访问方式
    // 1、通过对象访问
    Person p2;
    cout << p2.m_A << endl;
    // 2、通过类名进行访问
    cout << Person::m_A << endl;
}

void test3()
{
    Person p;
    p.func();
    Person::func();
}

int main()
{
    // test1();
    // test2();
    test3();
    system("pause");
    return 0;
}