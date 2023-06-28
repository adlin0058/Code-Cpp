// 值传递
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    cout << "交换前："
         << "\n"
         << a << "\n"
         << b << endl;
    // 交换
    int temp = a;
    a = b;
    b = temp;
    cout << "交换后："
         << "\n"
         << a << "\n"
         << b << endl;
}
int main()
{
    int a = 0;
    int b = 0;
    cout << "请输入要交换的两个数：" << endl;
    cin >> a >> b;
    swap(a, b);
    system("pause");
    return 0;
}