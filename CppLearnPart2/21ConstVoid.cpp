#include <iostream>
using namespace std;

// 常函数

class Person
{
    // this 的本质是指针常量  指针的指向不可以更改
    // Person * const this;
public:
    Person()
    {
    }
    // 成员函数后加const，修饰的是this指向，让指针指向的值也不可以修改
    void showPerson() const
    {
        // this不可以更改指针指向
        // this = NULL;

        // 指针指向的值也不可以更改
        // this->m_A = 100;
        m_B = 100;
    }

    void func()
    {
    }
    int m_A;
    mutable int m_B;
};

void test1()
{
    Person p;
    p.showPerson();
}

// 常对象
void test2()
{
    const Person p1;
    // p1.m_A = 100;
    p1.m_B = 100;

    // 常对象只能调用常函数
    // p1.func();
    p1.showPerson();
}

int main()
{
    test1();

    system("pause");
    return 0;
}