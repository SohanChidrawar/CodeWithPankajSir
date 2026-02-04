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
        ListNode *curr = head, *prev = NULL;
        while(curr)
        {
            ListNode *Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        ListNode *ptr = reverse(head);
        int carry = 0;
        ListNode *curr = ptr, *prev = NULL;

        while(curr)
        {
            int data = 2* curr->val + carry;
            curr->val = data % 10;

            if(data > 9)
                carry = 1;
            else
                carry = 0;
            
            prev = curr;
            curr = curr->next;
        }

        // if carry left after the loop create new node for it
        if(carry!=0)
        {
            ListNode* newnode = new ListNode(carry);
            prev->next = newnode;
        }

        ListNode *res = reverse(ptr);
        return res;

    }
};
