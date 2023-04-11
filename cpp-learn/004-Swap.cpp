// todo 使用异或(^)完成数据交换
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "请输出两个数:";
    cin >> a >> b;
    cout << "交换前:" << a << " " << b << endl;
    // swap
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "交换后:" << a << " " << b << endl;

    system("pause");
    return 0;
}