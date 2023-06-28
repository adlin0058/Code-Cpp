#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 2, 7, 3, 2, 3, 6, 4, 9, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "数组元素为：" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // 翻转数组元素1
    // for (int i = 0; i < 5 / 2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[4 - i];
    //     arr[4 - i] = temp;
    // }

    // 翻转元素2
    int start = 0; // 开始元素下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "反转后为：" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    system("pause");
    return 0;
}