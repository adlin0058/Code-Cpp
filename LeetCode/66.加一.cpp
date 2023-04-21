/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        // 从最低位开始遍历
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i]++; // 对当前位加1
            // 如果当前位等于10，说明需要进位
            if (digits[i] == 10)
                digits[i] = 0;
            else
                return digits; // 否则直接返回结果
        }
        // 如果整个数字都需要进位，需要在数组最前面插入一个1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end
