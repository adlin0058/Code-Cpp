#include <iostream>
using namespace std;
class Person
{
public:
    string m_name;

protected:
    string m_car;

private:
    int password;
};

int main()
{
    Person p1;
    p1.m_name = "张三";
    // p1.m_car = "motto";
    // p1.m_password = 123456;
    system("pause");
    return 0;
}