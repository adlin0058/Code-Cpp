// 立方体类
#include <iostream>
using namespace std;

class Cube
{
public:
    // 获取立方体面积
    double getArea()
    {
        return (m_L + m_W + m_H) * 2;
    }
    // 获取立方体体积
    double getVolume()
    {
        return m_H * m_W * m_L;
    }
    // 设置长、宽、高
    void setLength(double l)
    {
        if (l > 0)
            m_L = l;
    }
    void setWidth(double w)
    {
        if (w > 0)
            m_W = w;
    }
    void setHight(double h)
    {
        if (h > 0)
            m_H = h;
    }
    // 获取长、宽、高
    double getLength()
    {
        return m_L;
    }
    double getWidth()
    {
        return m_W;
    }
    double getHight()
    {
        return m_H;
    }
    // 用成员函数判断是否相等
    bool isSameByClass(Cube &c1)
    {
        if (m_L == c1.getLength() && m_W == c1.getWidth() && m_H == c1.getHight())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:
    // 属性
    double m_L;
    double m_W;
    double m_H;
};

// 全局函数判断两立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHight() == c2.getHight())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Cube c1, c2;
    c1.setLength(30);
    c1.setWidth(40);
    c1.setHight(50);

    c2.setLength(50);
    c2.setWidth(30);
    c2.setHight(40);

    if (c1.getArea() == c2.getArea())
    {
        cout << "面积相等" << endl;
    }
    else
    {
        cout << "面积不相等" << endl;
    }

    if (c1.getVolume() == c2.getVolume())
    {
        cout << "体积相等" << endl;
    }
    else
    {
        cout << "体积不相等" << endl;
    }

    system("pause");
    return 0;
}