#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// 学生结构体 包含 姓名、分数
struct Student
{
    string name;
    int score;
};
// 老师结构体 包含 姓名、学生数组
struct Teacher
{
    string name;
    Student sArray[5];
};

// 给老师和学生赋值
void allocateSpace(Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        string nameSeed = "ABCDE";
        tArray[i].name = "Teacher_";
        tArray[i].name += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].name = "Student_";
            tArray[i].sArray[j].name += nameSeed[j];
            // 用随机数给学生打分
            int random = rand() % 61 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}
// 打印老师和学生的信息
void printInfo(Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名 " << tArray[i].name << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名 " << tArray[i].sArray[j].name << " 学生分数 " << tArray[i].sArray[j].score << endl;
        }
    }
}
int main()
{
    // 随机数种子
    srand((unsigned int)time(NULL));

    Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);

    printInfo(tArray, len);
    system("pause");
    return 0;
}
