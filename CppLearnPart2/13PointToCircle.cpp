// 点与圆的关系
#include <iostream>
using namespace std;
// #include "13circle.h"
// #include "13point.h"

// 点类
class Point
{
public:
    // 设置X
    void setX(int x)
    {
        m_X = x;
    }
    // 获取X
    int getX()
    {
        return m_X;
    }
    // 设置Y
    void setY(int y)
    {
        m_Y = y;
    }
    // 获取Y
    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

// 圆类
class Circle
{
public:
    // 设置半径
    void setR(int r)
    {
        m_R = r;
    }
    // 获取半径
    int getR()
    {
        return m_R;
    }
    // 设置圆心
    void setPoint(Point center)
    {
        m_Center = center;
    }
    // 获取圆心
    Point getPoint()
    {
        return m_Center;
    }

private:
    int m_R;
    Point m_Center;
};

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
    // 点到圆心距离的平方
    double distance =
        (c.getPoint().getX() - p.getX()) * (c.getPoint().getX() - p.getX()) + (c.getPoint().getY() - p.getY()) * (c.getPoint().getY() - p.getY());
    // 半径的平方
    double R = c.getR() * c.getR();

    if (distance > R)
    {
        cout << "点在圆外" << endl;
    }
    else if (distance == R)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}
int main()
{
    // 实例化圆类
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setPoint(center);
    // 实例化点类
    Point p;
    p.setX(10);
    p.setY(9);

    // 调用判断
    isInCircle(c, p);
    system("pause");
    return 0;
}