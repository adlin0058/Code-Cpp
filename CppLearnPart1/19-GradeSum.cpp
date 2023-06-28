/*
给出三位同学的各科成绩，求每个同学的总成绩
    语文 数学 英语
张三 100 100 100
李四 90  50  100
王五 60  70  80
*/
#include <iostream>
using namespace std;
int main()
{

    int arr[3][3] = {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}};
    string name[3] = {"张三", "李四", "王五"};
    // cout << "张三总成绩为：" << arr[0][0] + arr[0][1] + arr[0][2] << endl;
    // cout << "李四总成绩为：" << arr[1][0] + arr[1][1] + arr[1][2] << endl;
    // cout << "王五总成绩为：" << arr[2][0] + arr[2][1] + arr[2][2] << endl;
    // 统计每个人的总成绩
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << name[i] << "同学的总成绩为：" << sum << endl;
    }
    system("pause");
    return 0;
}