// 赋值运算符重载
#include <iostream>
using namespace std;

class Person
{
public:
    // 构造函数
    Person(int age)
    {
        m_age = new int(age);
    }
    // 析构函数
    ~Person()
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }

    // 重载 赋值运算符
    Person &operator=(Person &p)
    {
        // 先判断是否有属性在堆区，如果有先释放干净，再进行深拷贝
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        this->m_age = new int(*p.m_age);

        return *this;
    }
    int *m_age;
};

void test()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);

    p3 = p2 = p1;
    cout << "p1 = " << *p1.m_age << endl;
    cout << "p2 = " << *p2.m_age << endl;
    cout << "p3 = " << *p3.m_age << endl;
}

int main()
{
    test();

    system("pause");
    return 0;
}