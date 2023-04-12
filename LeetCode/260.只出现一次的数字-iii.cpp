/*
 * @lc app=leetcode.cn id=260 lang=cpp
 *
 * [260] 只出现一次的数字 III
 */

// @lc code=start
class Solution
{
public:
  vector<int> singleNumber(vector<int> &nums)
  {
    int eor = 0;
    for (int i = 0; i < nums.size(); i++)
      eor ^= nums[i];
    int rightOne = 1;
    while ((eor & rightOne) == 0)
      rightOne <<= 1;
    int eor2 = 0;
    for (int i = 0; i < nums.size(); i++)
      if (nums[i] & rightOne)
        eor2 ^= nums[i];
    return {eor2, eor ^ eor2};
  }
};
// @lc code=end
