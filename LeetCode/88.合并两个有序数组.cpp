/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int p = m - 1;
        int q = n - 1;
        int total = m + n - 1;
        int temp;
        while (p >= 0 || q >= 0)
        {
            if (p == -1)
            {
                temp = nums2[q--];
            }
            else if (q == -1)
            {
                temp = nums1[p--];
            }
            else if (nums1[p] > nums2[q])
            {
                temp = nums1[p--];
            }
            else
            {
                temp = nums2[q--];
            }
            nums1[total--] = temp;
        }
    }
};
// @lc code=end
