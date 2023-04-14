// 求小和
#include <iostream>
using std::cout, std::endl, std::cin;
void process(int *a, int left, int right);
void merge(int *a, int left, int mid, int right);
int sum = 0;
int main()
{
    cout << "请输入数组长度N:" << '\n';
    int n = 0;
    cin >> n;
    cout << "请输入数组元素:" << '\n';
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    process(arr, 0, n - 1);
    cout << "排序后为" << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    cout << "小和为:" << sum << '\n';
    system("pause");
    return 0;
}

void process(int *a, int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    process(a, left, mid);
    process(a, mid + 1, right);
    merge(a, left, mid, right);
}

void merge(int *a, int left, int mid, int right)
{
    //* 定义临时数组
    int *temp = new int[right - left + 1];
    int p1 = left;
    int p2 = mid + 1;
    int i = 0;
    while (p1 <= mid && p2 <= right)
    {
        if (a[p1] == a[p2])
        {
            temp[i++] = a[p2++];
        }
        else if (a[p1] < a[p2])
        {
            sum += (right - p2 + 1) * a[p1];
            temp[i++] = a[p1++];
        }
        else
        {
            temp[i++] = a[p2++];
        }
    }
    while (p1 <= mid)
    {
        temp[i++] = a[p1++];
    }
    while (p2 <= right)
    {
        temp[i++] = a[p2++];
    }
    for (int j = 0; j < right - left + 1; j++)
    {
        a[left + j] = temp[j]; //! left+j写成j++,已更改
    }
    delete[] temp;
}