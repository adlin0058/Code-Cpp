// 二分法判断数字是否存在
#include <iostream>
using namespace std;
int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    cout << "查找的数组是" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n ";
    cout << "请输入要查找的数字：" << endl;
    cin >> n;
    int left = 0;
    int right = 9;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (nums[mid] == n)
        {
            cout << "找到了,位置为" << mid << endl;
            break;
        }
        else if (nums[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    if (left > right)
    {
        cout << "没有找到" << endl;
    }
    system("pause");
    return 0;
}