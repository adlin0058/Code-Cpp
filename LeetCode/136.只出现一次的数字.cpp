/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xor_res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xor_res = xor_res ^ nums[i];
        }
        return xor_res;
    }
};
// @lc code=end
