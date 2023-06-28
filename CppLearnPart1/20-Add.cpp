// 函数实现加法
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}

int main()
{
    int a = 0;
    int b = 0;
    cout << "请输入两个数：" << endl;
    cin >> a >> b;
    cout << "两数相加的的结果是："
         << "\n"
         << add(a, b) << endl;

    system("pause");
    return 0;
}