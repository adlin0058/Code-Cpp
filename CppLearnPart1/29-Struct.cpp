#include <iostream>
using namespace std;
int main()
{
    struct Student
    {
        string name;
        int age;
        int score;
    };
    // 定义方法1
    struct Student s1;
    s1.name = "张三";
    s1.age = 20;
    s1.score = 100;

    cout << "姓名： " << s1.name << " 年龄： " << s1.age << " 分数： " << s1.score << endl;

    // 定义方法2
    struct Student s2 = {"李四", 19, 80};
    cout << "姓名： " << s2.name << " 年龄： " << s2.age << " 分数： " << s2.score << endl;
    system("pause");
    return 0;
}