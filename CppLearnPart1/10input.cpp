#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 1.整型
    int a;
    cout << "请输入整型变量a的值：" << endl;
    cin >> a;
    cout << "a = " << a << endl;

    // 2.浮点型
    float f;
    cout << "请输入浮点型变量f的值：" << endl;
    cin >> f;
    cout << "f = " << f << endl;

    // 3.字符型
    char ch;
    cout << "请输入字符型变量ch的值：" << endl;
    cin >> ch;
    cout << "ch = " << ch << endl;

    // 4.字符串型
    string str;
    cout << "请输入字符串型变量str的值：" << endl;
    cin >> str;
    cout << "str = " << str << endl;

    // 5.布尔型
    bool flag = true;
    cout << "请输入布尔型变量flag的值：" << endl;
    // cin >> flag;
    cout << "flag = " << flag << endl;

    system("pause");
    return 0;
}