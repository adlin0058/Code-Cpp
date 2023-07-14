// 深拷贝和浅拷贝
#include <iostream>
using namespace std;

// 浅拷贝：编译器自带的拷贝函数
class Person
{
public:
    Person()
    {
        cout << "默认构造" << endl;
    }

    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "有参构造" << endl;
    }
    ~Person()
    {
        cout << "析构函数" << endl;
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
    }

    int m_Age;
    int *m_Height;
};
void test1()
{
    Person p1(18, 180);
    cout << "年龄" << p1.m_Age << "身高" << *p1.m_Height << endl;

    Person p2(p1); // 浅拷贝
    cout << "年龄" << p2.m_Age << "身高" << *p2.m_Height << endl;
}

int main()
{
    test1();

    system("pause");
    return 0;
}