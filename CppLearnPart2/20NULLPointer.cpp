// 空指针访问成员函数
#include <iostream>
using namespace std;

class Person
{
public:
    void showClassName()
    {
        cout << "this is class Person" << endl;
    }

    void showAge()
    {
        // 报错的原因是传入的指针为空
        // 解决办法
        if (this == NULL)
        {
            return;
        }
        cout << this->m_age << endl;
    }
    int m_age;
};

void test1()
{
    Person *p = NULL;
    p->showAge();
    p->showClassName();
}

int main()
{
    test1();

    system("pause");
    return 0;
}