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

    system("pause");
    return 0;
}