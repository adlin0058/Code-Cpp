// 构造函数的分类和调用方法

#include <iostream>
using namespace std;

class Person
{
public:
    // 无参构造函数
    Person()
    {
        cout << "无参构造函数" << endl;
    }
    // 有参构造函数
    Person(int a)
    {
        age = a;
        cout << "有参构造函数" << endl;
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
    }

    // 析构函数
    ~Person()
    {
        cout << "析构函数" << endl;
    }

private:
    int age;
};

// 调用
void test1()
{
    // 1、括号法(常用)
    Person p1;     // 默认构造
    Person p2(10); // 有参构造
    Person p3(p2); // 拷贝构造

    //! 调用默认构造函数时，不要加()
    Person p();  // 被认为函数声明
    void test(); // 同理

    // 2、显示法
    Person p4;
    Person p5 = Person(10); // 有参构造
    Person p6 = Person(p2); // 拷贝构造

    // 匿名对象
    Person(10); // 当前行执行结束后，系统立即回收

    //! 不要用拷贝构造 初始化匿名对象
    //* Person(p2);  ==> Person p2;  会认为重定义

    // 3、隐式转换法
    Person p7 = 10; // 相当于 Person P7 = Person(10);
}

int main()
{
    test1();
    system("pause");
    return 0;
}