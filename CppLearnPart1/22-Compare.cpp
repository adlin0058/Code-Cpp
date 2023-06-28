// 比较两个数，返回较大的
#include <iostream>
using namespace std;

int compare(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    cout << "请输入要比较的两个数" << endl;
    cin >> a >> b;
    cout << "较大的数是：" << compare(a, b) << endl;

    system("pause");
    return 0;
}

int compare(int a, int b)
{
    return a > b ? a : b;
}