// 选择排序
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "请输入数组的长度：" << endl;
    cin >> n;
    int nums[n];
    cout << "请输入数组的元素：" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // 0-0已经是有序
    // 保证0-i之间的数是有序的，进行循环1-i
    for (int i = 1; i < n; i++)
    {
        // i与i-1比较，如果i-1大，就交换
        // 然后i-1与i-2比较，如果i-2大，就交换……
        // 一直到0，如果0大，就交换
        for (int j = i; j >= 0 && nums[j] < nums[j - 1]; j--)
        {
            int temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
        }
    }
    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}