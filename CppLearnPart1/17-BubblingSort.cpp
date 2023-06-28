#include <iostream>
using namespace std;

/*
冒泡排序
每一轮：从前到后，相邻的两个数进行比较，如果 前>后 交换
一轮结束后，最后的为最大值
下一轮：
比较并交换这个数之前的数
直到不能比较
*/
int main()
{
    int arr[] = {4, 1, 6, 2, 9, 8, 5, 3, 7};
    // 原始序列
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << endl;
    }

    // 进行排序
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 9 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // 排序后的
    cout << "排序后的" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << endl;
    }
    system("pause");
    return 0;
}