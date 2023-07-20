// 左移运算符重载
#include <iostream>
using namespace std;

class Person
{

    friend ostream &operator<<(ostream &cout, Person &p);

public:
    Person(int a, int b);

private:
    int a;
    int b;
};

// 构造函数实现，需要加上作用域
Person::Person(int a, int b)
{
    this->a = a;
    this->b = b;
}
// 左移运算符<< 重载
ostream &operator<<(ostream &cout, Person &p)
{
    cout << p.a << " " << p.b << endl;
    return cout;
}

// 测试
void test()
{
    Person p(10, 20);
    cout << p << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}