// 函数实现冒泡排序
#include <iostream>
using namespace std;
void BubbingSort(int *arr, int n);
void PrintArray(int *arr, int n);
int main()
{
    // 读取数组
    int n = 0;
    cout << "请输入数组长度" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "原始数组为:" << endl;
    PrintArray(arr, n);
    // 排序
    BubbingSort(arr, n);

    // 输出结果
    cout << "排序后的结果为:" << endl;
    PrintArray(arr, n);

    system("pause");
    return 0;
}

// 排序实现
void BubbingSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) //! 错误1 j 写成 i
            {
                int temp = arr[j]; //! 错误2 temp 没有赋值为arr[j]
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// 打印实现
void PrintArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}