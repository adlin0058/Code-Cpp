// 选择排序和冒泡排序
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // 选择排序
    for (int i = 0; i < 9; i++)
    {
        // 将arr[i]与arr[i+1]~arr[9]中的最小值交换
        for (int j = i + 1; j < 10; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // 输出排序后的数组
    cout << "选择排序后的数组为(从小到大):" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // 冒泡排序
    for (int i = 0; i < 9; i++)
    {
        // 依次比较相邻的两个元素，将较大的元素放在后面
        // 将arr[0]~arr[9-i]中的最大值放在arr[9-i]
        for (int j = 0; j < 9 - i; j++)
        {
            int temp;
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // 输出冒泡排序后的数组
    cout << "冒泡排序后的数组为(从大到小):" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    system("pause");
    return 0;
}