// 数组中的逆序对问题
#include <iostream>
using namespace std;

int temp[6];                      // 临时数组用于归并排序
int nums[6] = {1, 3, 2, 5, 6, 8}; // 待排序数组

// 归并排序
int MergeSort(int l, int r);

int main()
{
    // 输出数组中的逆序对数目
    cout << MergeSort(0, 5) << '\n';
    system("pause");
    return 0;
}

int MergeSort(int l, int r)
{
    if (l >= r)
        return 0;
    int k = 0, p1 = l, p2 = r;                           // k表示临时数组的下标，p1和p2表示左右两个子数组的下标
    int mid = l + r >> 1;                                // 取中间值
    int res = MergeSort(l, mid) + MergeSort(mid + 1, r); // 递归求左右子数组的逆序对数目
    // 归并排序
    while (p1 <= mid && p2 <= r)
    {
        if (nums[p1] <= nums[p2])   // 如果左边的数小于等于右边的数
            temp[k++] = nums[p1++]; // 把左边的数加入到临时数组中
        else                        // 如果右边的数小于左边的数
        {
            temp[k++] = nums[p2++]; // 把右边的数加入到临时数组中
            res += mid - p1 + 1;    // 左边子数组中剩余的数都大于右边的数，统计逆序对数目
        }
    }
    // 把左边子数组剩余的数加入到临时数组中
    while (p1 <= mid)
        temp[k++] = nums[p1++];
    // 把右边子数组剩余的数加入到临时数组中
    while (p2 <= r)
        temp[k++] = nums[p2++];
    // 把临时数组中的数复制到原数组中
    for (int i = l, j = 0; i <= r; i++, j++)
        nums[i] = temp[j];

    return res; // 返回逆序对数目
}