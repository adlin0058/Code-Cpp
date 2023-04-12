/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        long int y = 0;
        int z = x;
        while (z)
        {
            y = y * 10 + (z % 10);
            z /= 10;
        }
        return x == y;
    }
};
// @lc code=end
