/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode.cn/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (66.32%)
 * Likes:    3069
 * Dislikes: 0
 * Total Accepted:    1.4M
 * Total Submissions: 2.1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 *
 *
 * 示例 2：
 *
 *
 * 输入：l1 = [], l2 = []
 * 输出：[]
 *
 *
 * 示例 3：
 *
 *
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 两个链表的节点数目范围是 [0, 50]
 * -100
 * l1 和 l2 均按 非递减顺序 排列
 *
 *
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // 创建一个虚拟头节点
        ListNode *dummy = new ListNode(0);
        // cur指针指向虚拟头节点，用于遍历新链表
        ListNode *cur = dummy;
        while (l1 != nullptr && l2 != nullptr)
        {
            // 定义一个指针引用pp，指向l1和l2中较小的头节点
            ListNode *&pp = (l1->val < l2->val) ? l1 : l2;
            // 将cur的下一个节点指向pp
            cur->next = pp;
            // 将cur指向新的节点
            cur = cur->next;
            // 将pp指向下一个节点，即l1或l2中的第二个节点
            pp = pp->next;
        }
        // 将剩余的节点直接接到新链表的末尾
        cur->next = (l1 == nullptr) ? l2 : l1;

        // 获取新链表的头节点
        ListNode *ans = dummy->next;
        // 删除虚拟头节点
        delete dummy;
        // 返回新链表的头节点
        return ans;
    }
};

// @lc code=end
