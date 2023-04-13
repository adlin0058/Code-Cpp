#include <iostream>

int main()
{
    int nums[] = {2, 9, 4, 3, 6, 12, 8, 7, 10, 1};
    int left = 0, right = 9;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if ((mid == 0 || nums[mid] < nums[mid - 1]) && (mid == 9 || nums[mid] < nums[mid + 1]))
        {
            std::cout << "局部最小值:" << mid << std::endl;
        }
        if (nums[mid] > nums[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    system("pause");
    return 0;
}
