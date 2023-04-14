// 归并排序
#include <iostream>
using std::cout, std::endl;
void process(int *a, int left, int right);
void merge(int *a, int left, int mid, int right);

int main()
{
    int arr[8] = {80, 30, 60, 40, 20, 10, 50, 70};
    process(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    system("pause");
    return 0;
}

void process(int *a, int left, int right)
{
    if (left >= right) //! 未判断，已更改
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
        temp[i++] = a[p1] <= a[p2] ? a[p1++] : a[p2++];
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