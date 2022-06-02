class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *pre = new ListNode(0);
        ListNode *cur = head;
        pre->next = head;
        while (curr && curr->next)
        {
            ListNode *temp = pre->next;
            pre->next = curr->next;
            curr->next = curr->next->next;
        }
    }
};