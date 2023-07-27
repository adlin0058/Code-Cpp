// 关系运算符重载
#include <iostream>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }

    bool operator>(Person &p)
    {
        if (this->m_Age > p.m_Age)
        {
            return true;
        }
        return false;
    }

    bool operator<(Person &p)
    {
        if (this->m_Age < p.m_Age)
        {
            return true;
        }
        return false;
    }
    bool operator==(Person &p)
    {
        if (this->m_Age == p.m_Age)
        {
            return true;
        }
        return false;
    }
    bool operator!=(Person p)
    {
        if (this->m_Age != p.m_Age)
        {
            return true;
        }
        return false;
    }
    string m_Name;
    int m_Age;
};

void test()
{
    Person p1("张三", 18);
    Person p2("李四", 20);

    if (p1 == p2)
    {
        cout << "张三和李四一样大" << endl;
    }
    if (p1 != p2)
    {
        cout << "张三和李四不一样大" << endl;
    }
    if (p1 > p2)
    {
        cout << "张三比李四大" << endl;
    }
    if (p1 < p2)
    {
        cout << "李四比张三大" << endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}