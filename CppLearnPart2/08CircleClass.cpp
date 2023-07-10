// 设计一个圆类，求圆的周长
#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
    // 访问权限
public:
    // 属性
    int m_r;
    // 行为
    // 计算圆的周长
    double calculate()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    // 实例化对象
    Circle c1;
    // 属性赋值
    c1.m_r = 10;

    cout << "圆的周长为:" << c1.calculate() << endl;

    system("pause");
    return 0;
}