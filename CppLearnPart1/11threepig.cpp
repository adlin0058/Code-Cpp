/*
三只小猪称体重
有A,B,C三只小猪
分别输入三只小猪的体重
判断哪只小猪最重
*/
#include <iostream>
using namespace std;
int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "请输入A的体重：" << endl;
    cin >> a;
    cout << "请输入B的体重：" << endl;
    cin >> b;
    cout << "请输入C的体重：" << endl;
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "A最重！" << endl;
        }
        else
        {
            cout << "C最重！" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B最重！" << endl;
        }
        else
        {
            cout << "C最重！" << endl;
        }
    }

    system("pause");
    return 0;
}