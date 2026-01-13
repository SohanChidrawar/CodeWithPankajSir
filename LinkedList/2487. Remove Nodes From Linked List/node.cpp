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
class Solution {
public:

    ListNode *reverse(ListNode *head)
    {
        ListNode *curr=head, *prev=NULL, *Next;
        while(curr)
        {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode *curr=head, *prev = head;
        int max = head->val;
        head = head->next;

        while(head)
        {
            if(head->val >= max)
            {
                max = head->val;
                prev = head;
                head = head->next;
            }
            else
            {
                prev->next = head->next;
                head = prev->next;
            }
        }
        head = reverse(curr);
        return head;
    }
};
