// 构造函数和析构函数
#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person 构造函数的调用" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
};

void test1()
{
    Person p;
}

int main()
{
    test1();

    system("pause");
    return 0;
}