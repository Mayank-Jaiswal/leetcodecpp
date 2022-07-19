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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL || k == 0)
            return head;
        int c = 1;
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            c++;
            temp = temp->next;
        }
        ListNode *tail;
        k = k % c;
        int t = c - k - 1;
        ListNode *temp2 = head;
        while (t--)
        {
            temp2 = temp2->next;
        }
        temp->next = head;
        cout << "c is" << c;
        tail = temp2->next;
        head = tail;
        temp2->next = NULL;
        return head;
    }
};