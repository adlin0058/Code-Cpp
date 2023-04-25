/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
// 定义了一个 Solution 类
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // 建立一个哈希表 counts，用于记录每个元素出现的次数
        unordered_map<int, int> counts;
        // 初始化众数 majority 为 0，出现次数 cnt 为 0
        int majority = 0, cnt = 0;
        // 遍历数组 nums 中的每一个元素
        for (int num : nums)
        {
            // 更新 counts 中 num 元素出现的次数
            ++counts[num];
            // 如果当前元素 num 出现的次数比众数出现次数 cnt 还多
            if (counts[num] > cnt)
            {
                // 更新众数 majority 为当前元素 num
                majority = num;
                // 更新众数出现的次数 cnt 为当前元素 num 出现的次数
                cnt = counts[num];
            }
        }
        // 返回众数 majority
        return majority;
    }
};

// @lc code=end
