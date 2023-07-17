#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }
    //! 如果不返回引用，会返回一个拷贝对象
    Person &personAddAge(Person p)
    {
        this->age += p.age;

        return *this;
    }
    int age;
};

void test1()
{
    Person p(18);
    cout << p.age << endl;
}

void test2()
{
    Person p1(10);
    Person p2(10);

    p2.personAddAge(p1);
    cout << p2.age << endl;
    // 链式编程思想
    p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
    cout << p2.age << endl;
}
int main()
{
    // test1();
    test2();
    system("pause");
    return 0;
}