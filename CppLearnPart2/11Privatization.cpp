// 成员变量私有化
#include <iostream>
using namespace std;

class Person
{
public:
    // 设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    // 设置年龄
    void setAge(int age)
    {
        // 有效性验证
        if (age > 0 && age < 150)
            m_Age = age;
    }
    // 获取姓名
    string getName()
    {
        return m_Name;
    }
    // 获取年龄
    int getAge()
    {
        return m_Age;
    }

private:
    string m_Name;
    int m_Age;
};

int main()
{
    Person p1;
    p1.setName("张三");
    p1.setAge(20);
    cout << p1.getName() << " " << p1.getAge() << endl;
    system("pause");
    return 0;
}