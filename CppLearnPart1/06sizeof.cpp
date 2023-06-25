// 用sizeof求数据类型占用空间大小
#include <iostream>
using namespace std;
int main()
{
    /*
    short(2) int(4) long(4) long long(8)

    sizeof(数据类型、变量名)
    */

    // short
    short num1 = 10;
    cout << "short所占空间为：" << sizeof(short) << endl;
    cout << "short所占空间为：" << sizeof(num1) << endl;

    // int
    int num2 = 10;
    cout << "int所占空间为：" << sizeof(int) << endl;

    // long
    long num3 = 10;
    cout << "long所占空间为：" << sizeof(long) << endl;

    // long long
    long long num4 = 10;
    cout << "longlong所占空间为：" << sizeof(long long) << endl;

    system("pause");
    return 0;
}