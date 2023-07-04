// 函数实现打印结构体的元素
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

// 值传递
void print1(struct Student s)
{
    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.score << endl;
}
// 地址传递
void print2(const struct Student *p) // 加入const防止误操作——常量指针
{
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;
}

int main()
{
    Student s = {"张三", 18, 100};
    print1(s);
    print2(&s);
    system("pause");
    return 0;
}