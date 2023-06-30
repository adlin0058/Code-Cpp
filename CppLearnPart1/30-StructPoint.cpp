// 用指针访问结构体
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

    Student s = {"张三", 18, 100};
    Student *p = &s;

    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;

    system("pause");
    return 0;
}