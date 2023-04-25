/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *cur = NULL, *pre = head; // 定义指针cur和pre，并初始化cur为NULL，pre为头节点
        while (pre != NULL)
        {                            // 只要pre不为NULL，就继续循环
            ListNode *t = pre->next; // 将pre的下一个节点保存在t中，方便后面处理
            pre->next = cur;         // 将pre的next指针指向cur，实现反转
            cur = pre;               // 将cur指向pre，方便后续操作
            pre = t;                 // 将pre指向原链表的下一个节点，方便继续遍历链表
        }
        return cur; // 返回反转后的链表的头节点
    }
};

// @lc code=end
