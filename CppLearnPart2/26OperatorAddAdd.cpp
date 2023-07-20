// 累加运算符重载
#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person p);

public:
    Person(int a);
    // 累加运算符重载 前置
    Person &operator++()
    {
        num++;
        return *this;
    }
    // 累加运算符重载 后置
    // int 占位符号 用于区分 前置 后置
    // 必须返回值 不能引用 返回引用 结束后temp就释放了
    Person operator++(int)
    {
        Person temp = *this;
        num++;
        return temp;
    }

private:
    int num;
};

// 构造函数
Person::Person(int a)
{
    this->num = a;
}

// 左移运算符重载
ostream &operator<<(ostream &cout, Person p)
{
    cout << p.num << endl;
    return cout;
}

void test()
{
    Person p(0);
    cout << (++p)++;
    cout << p;
}

int main()
{
    test();
    system("pause");
    return 0;
}