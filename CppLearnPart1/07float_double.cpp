#include <iostream>
using namespace std;

int main()
{
    // 输出6位有效数字
    float num1 = 3.1415926f;
    double num2 = 3.1415926;
    cout << num1 << " " << num2 << endl;

    // 内存空间
    cout << "float" << sizeof(float) << endl;
    cout << "double" << sizeof(double) << endl;

    // 科学计数法
    float f2 = 3e2; // 3*10^2
    float f3 = 5e-4;
    cout << f2 << "\n"
         << f3 << endl;
    system("pause");
    return 0;
}