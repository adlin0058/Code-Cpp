/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        // 库函数
        // return sqrt(x);

        // 二分查找
        /*
        long long l = 0;
        long long r = x / 2 + 1;
        long long mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return r;
        */
    }
};
// @lc code=end
