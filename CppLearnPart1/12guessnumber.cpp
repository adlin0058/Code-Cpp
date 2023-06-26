/*
系统生成随机数
玩家猜
提示过大过小
至猜中
退出
*/
#include <iostream>
using namespace std;
int main()
{
    int goal = rand() % 100;
    bool flag = false;
    int n = 0;
    while (!flag)
    {
        cout << "请给出你猜的数字" << endl;
        cin >> n;
        if (n > goal)
        {
            cout << "太大了" << endl;
        }
        else if (n < goal)
        {
            cout << "太小了" << endl;
        }
        else
        {
            flag = true;
        }
    }
    cout << "猜对了！" << endl;
    system("pause");
    return 0;
}