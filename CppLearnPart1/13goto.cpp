#include <iostream>
using namespace std;
int main()
{
    cout << "开始了" << endl;
    cout << 1 << endl;
    goto mark;
    cout << "2" << endl;
mark:
    cout << "结束了！" << endl;

    system("pause");
    return 0;
}