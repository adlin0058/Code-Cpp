#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "请输入一个整数:";
    cin >> n;
    int count;
    for (int i = 0; i < n; i++)
    {
        cout << "第" << i << "次循环"
             << "\n";
    }
    // count = 0;
    // while (count < n)
    // {
    //     cout << "第" << count << "次循环"
    //          << "\n";
    //     count++;
    // }
    // count = 0;
    // do
    // {
    //     cout << "第" << count << "次循环"
    //          << "\n";
    //     count++;
    // } while (count >= n);

    system("pause");
    return 0;
}
