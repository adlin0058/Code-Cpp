// 查找大于n的最左位置
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5};
    int n, index;
    cout << "请输入要查找的数字：" << endl;
    cin >> n;
    int left = 0;
    int right = 14;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (nums[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    index = left;
    cout << "大于" << n << "的最左位置为" << index << endl;
    system("pause");
    return 0;
}