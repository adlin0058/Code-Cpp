// 点与圆的关系
#include <iostream>
using namespace std;

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
    // 半径的平方
    double R = c.getR() * c.getR();
}
int main()
{

    system("pause");
    return 0;
}