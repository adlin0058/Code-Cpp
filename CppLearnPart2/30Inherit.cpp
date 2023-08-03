#include <iostream>
using namespace std;

// 基础页面
class BasePage
{
public:
    void header()
    {
        cout << "首页、登录、注册……" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作……" << endl;
    }
    void left()
    {
        cout << "Java、Python、C++……" << endl;
    }
};

class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java视频" << endl;
    }
};

class Python : public BasePage
{
    void content()
    {
        cout << "Python视频" << endl;
    }
};

class Cpp : public BasePage
{
    void content()
    {
        cout << "Cpp视频" << endl;
    }
};

void test()
{
    Java java;
    java.header();
    java.content();
    java.left();
    java.footer();
}

int main()
{
    test();
    system("pause");
    return 0;
}