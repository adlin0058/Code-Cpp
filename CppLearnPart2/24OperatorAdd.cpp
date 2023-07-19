// + 运算符重载
#include <iostream>
using namespace std;

class Person
{
public:
    // 成员属性相加
    // 本质调用
    Person PersonAddPerson(Person &p)
    {
        Person temp;
        temp.a = this->a + p.a;
        temp.b = this->b + p.b;
        return temp;
    }

    // +重载——成员函数
    // Person operator+(Person &p)
    // {
    //     Person temp;
    //     temp.a = this->a + p.a;
    //     temp.b = this->b + p.b;
    //     return temp;
    // }
    int a;
    int b;
};

// 全局函数实现+重载
// 本质调用
Person myAdd(Person &p1, Person &p2)
{
    Person temp;
    temp.a = p1.a + p2.a;
    temp.b = p1.b + p2.b;
    return temp;
}
// +运算符重载
Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.a = p1.a + p2.a;
    temp.b = p1.b + p2.b;
    return temp;
}

// 运算符重载也可以函数重载
Person operator+(Person &p1, int num)
{
    Person temp;
    temp.a = p1.a + num;
    temp.b = p1.b + num;
    return temp;
}

void test1()
{
    Person p1;
    p1.a = 10;
    p1.b = 20;
    Person p2;
    p2.a = 30;
    p2.b = 40;

    Person p3;
    // p3 = p1.PersonAddPerson(p2);
    // p3 = myAdd(p1, p2);
    p3 = p1 + p2;
    cout << p3.a << " " << p3.b << endl;
    // 调用函数重载
    Person p4;
    p4 = p1 + 10;
    cout << p4.a << " " << p4.b << endl;
}

int main()
{
    test1();
    system("pause");
    return 0;
}