/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL) // 如果链表为空或只有一个元素，直接返回该链表
            return head;
        ListNode *p = head;       // 定义慢指针p，初始化为链表的头节点
        ListNode *q = head->next; // 定义快指针q，初始化为p的下一个节点
        while (p->next != NULL)   // 遍历整个链表，直到p指向链表的最后一个节点
        {
            if (p->val == q->val) // 如果p和q指向的节点的值相等，说明有重复元素
            {
                if (q->next == NULL) // 如果q指向链表的最后一个节点，直接将p的next指向NULL
                    p->next = NULL;
                else // 如果q不是链表的最后一个节点
                {
                    p->next = q->next; // 将p的next指向q的下一个节点，即删除q所指向的节点
                    q = q->next;       // 将q指向下一个节点，继续比较
                }
            }
            else // 如果p和q指向的节点的值不相等
            {
                p = p->next; // 将p和q都指向下一个节点，继续比较
                q = q->next;
            }
        }
        return head; // 返回处理后的链表
    }
};
// @lc code=end
