#pragma once
#include <iostream>
using namespace std;

//! 头文件中类只用 声明函数 定义变量
//* 函数不用实现

// 点类
class Point
{
public:
    // 设置X
    void setX(int x);

    // 获取X
    int getX();

    // 设置Y
    void setY(int y);

    // 获取Y
    int getY();

private:
    int m_X;
    int m_Y;
};