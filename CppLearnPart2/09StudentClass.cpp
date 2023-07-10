// student类，赋值并打印姓名、id
#include <iostream>
using namespace std;

class student
{
    //* 类中的属性 成员属性
    //* 类中的行为 成员函数

    // 访问权限
public:
    // 属性
    string m_name;
    int m_id;
    // 行为

    // 姓名赋值
    void setName(string name)
    {
        m_name = name;
    }
    // id赋值
    void setId(int id)
    {
        m_id = id;
    }

    // 显示学生信息
    void showStudent()
    {
        cout << "姓名：\t" << m_name << endl;
        cout << "id：\t" << m_id << endl;
    }
};

int main()
{
    student s1;
    s1.setName("张三");
    s1.setId(111);

    s1.showStudent();
    system("pause");
    return 0;
}