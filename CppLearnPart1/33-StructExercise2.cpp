// 按年龄顺序打印英雄信息
#include <iostream>
using namespace std;

// 1、创建英雄结构体
struct Hero
{
    string name;
    int age;
    string gender;
};
// 排序实现
void bubbingSort(Hero hArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (hArray[j].age > hArray[j + 1].age)
            {
                Hero temp = hArray[j];
                hArray[j] = hArray[j + 1];
                hArray[j + 1] = temp;
            }
        }
    }
}

// 打印实现
void printInfo(Hero hArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << hArray[i].name << "\t年龄: " << hArray[i].age << "\t性别 " << hArray[i].gender << endl;
    }
}

int main()
{
    // 创建数组存放5个英雄
    Hero hArray[5] =
        {
            {"王昭君", 20, "女"},
            {"蔡文姬", 16, "女"},
            {"大乔", 19, "女"},
            {"小乔", 18, "女"},
            {"貂蝉", 19, "女"}};
    // 按照年龄升序排列
    int len = sizeof(hArray) / sizeof(hArray[0]);
    bubbingSort(hArray, len);

    // 打印结果
    printInfo(hArray, len);
    system("pause");
    return 0;
}