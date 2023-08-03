#include <iostream>
using namespace std;

// 仿函数非常灵活，没有固定写法

// 打印类
class MyPrint
{
public:
    // 函数调用 重载
    void operator()(string test)
    {
        cout << test << endl;
    }
};

// 加法类
class MyAdd
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

void test1()
{
    MyPrint myPrint;
    myPrint("hello world!"); // 非常类似于函数调用，称为 仿函数
}

void test2()
{
    MyAdd myAdd;
    int ret = myAdd(10, 20);
    cout << ret << endl;

    // 匿名对象调用
    cout << MyAdd()(20, 40) << endl;
}

int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}
