#include <iostream>
using namespace std;
// 手机类
class Phone
{
public:
    // 初始化列表
    Phone(string name) : Ph_Name(name)
    {
    }
    string Ph_Name;
};
// 人类
class Person
{
public:
    //                               Person phone = phone ↓隐式转换
    Person(string person, string phone) : P_Name(person), phone(phone)
    {
    }
    string P_Name;
    // 类对象作为类成员
    Phone phone;
};

// 构造顺序  先Phone 再 Person
// 析构顺序 先Person 再 Phone
int main()
{
    Person p("张三", "华为Nova6");
    cout << p.P_Name << " 用的手机是 " << p.phone.Ph_Name << endl;
    system("pause");
    return 0;
}
