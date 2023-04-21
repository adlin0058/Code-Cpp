/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int al = a.size(); // 获取字符串a的长度
        int bl = b.size(); // 获取字符串b的长度
        while (al < bl)    // 让两个字符串等长，若不等长，在短的字符串前补零，否则之后的操作会超出索引
        {
            a = '0' + a; // 在a的前面加上字符'0'，即在a前面补零
            ++al;        // 更新a的长度
        }
        while (al > bl) // 让两个字符串等长，若不等长，在短的字符串前补零，否则之后的操作会超出索引
        {
            b = '0' + b; // 在b的前面加上字符'0'，即在b前面补零
            ++bl;        // 更新b的长度
        }
        for (int j = a.size() - 1; j > 0; --j) // 从后到前遍历所有的位数，同位相加
        {
            a[j] = a[j] - '0' + b[j]; // a和b同位相加
            if (a[j] >= '2')          // 若大于等于字符‘2’，需要进一
            {
                a[j] = (a[j] - '0') % 2 + '0'; // 当前位数相加后对2取模，再加上字符'0'，即得到余数的字符表示
                a[j - 1] = a[j - 1] + 1;       // 将前一位加1
            }
        }
        a[0] = a[0] - '0' + b[0]; // 将a和b的第0位相加
        if (a[0] >= '2')          // 若大于等于2，需要进一
        {
            a[0] = (a[0] - '0') % 2 + '0'; // 第0位相加后对2取模，再加上字符'0'，即得到余数的字符表示
            a = '1' + a;                   // 在a的前面加上字符'1'，即进位
        }
        return a; // 返回相加结果
    }
};
// @lc code=end
