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
    bool isPalindrome(ListNode *head)
    {
        ListNode *fast = head, *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast != NULL)
        {
            slow = slow->next;
        }
        slow = reverse(slow);
        fast = head;
        while (slow != NULL)
        {
            if (fast->val != slow->val)
                return false;
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }

public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = NULL;
        while (head != NULL)
        {
            ListNode *nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
};