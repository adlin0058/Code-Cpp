#include "13circle.h"

// 圆类

// 设置半径
void Circle::setR(int r)
{
    m_R = r;
}
// 获取半径
int Circle::getR()
{
    return m_R;
}
// 设置圆心
void Circle::setPoint(Point center)
{
    m_Center = center;
}
// 获取圆心
Point Circle::getPoint()
{
    return m_Center;
}
