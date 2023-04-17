/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 *
 * https://leetcode.cn/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (44.15%)
 * Likes:    3876
 * Dislikes: 0
 * Total Accepted:    1.5M
 * Total Submissions: 3.3M
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
 *
 * 有效字符串需满足：
 *
 *
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 * 每个右括号都有一个对应的相同类型的左括号。
 *
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：s = "()"
 * 输出：true
 *
 *
 * 示例 2：
 *
 *
 * 输入：s = "()[]{}"
 * 输出：true
 *
 *
 * 示例 3：
 *
 *
 * 输入：s = "(]"
 * 输出：false
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= s.length <= 10^4
 * s 仅由括号 '()[]{}' 组成
 *
 *
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        //! 太慢了
        // unordered_map<char, int> m{{'(', 1}, {'[', 2}, {'{', 3}, {')', 4}, {']', 5}, {'}', 6}};
        // stack<char> st;
        // bool isValid = true;
        // if (s[0] == ')' || s[0] == ']' || s[0] == '}')
        //     isValid = false;
        // else
        // {
        //     for (char c : s)
        //     {
        //         int flag = m[c];
        //         if (flag >= 1 && flag <= 3)
        //         {
        //             st.push(c);
        //         }
        //         else if (!st.empty() && flag - 3 == m[st.top()])
        //         {
        //             st.pop();
        //         }
        //         else
        //         {
        //             isValid = false;
        //             break;
        //         }
        //     }
        //     if (!st.empty())
        //     {
        //         isValid = false;
        //     }
        // }
        // return isValid;

        //! 另一种解法

        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                continue;
            }
            char top = st.top();
            if (s[i] == ')' && top == '(')
            {
                st.pop();
                continue;
            }
            else if (s[i] == ']' && top == '[')
            {
                st.pop();
                continue;
            }
            else if (s[i] == '}' && top == '{')
            {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        return st.empty();
    }
};
// @lc code=end
bool isValid(string s)
{
    if (s.empty())
        return true;
    stack<char> stc;
    for (char c : s)
        if (c == ')' || c == ']' || c == '}')
            if (!stc.empty() && stc.top() == c)
                stc.pop();
            else
                return false;
        else
            switch (c)
            {
            case '(':
                stc.push(')');
                break;
            case '[':
                stc.push(']');
                break;
            case '{':
                stc.push('}');
                break;
            }
    return stc.empty();
}
