// todo 连续异或计算器

#include <iostream>
using namespace std;
int main()
{
    int n;
    int res = 0;
    while (1)
    {
        cout << "请输入要计算的数字：" << endl;
        cin >> n;
        if (n == 0)
            break;
        res = res ^ n;
        cout << "当前结果为：" << res << endl;
    }
}