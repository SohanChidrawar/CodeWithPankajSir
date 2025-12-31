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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        
        ListNode *first,*last;
        if(a->val < b->val)
        {
            first = last = a;
            a = a->next;
        }
        else
        {
            first = last = b;
            b = b->next;
        }

        while(a && b)
        {
            if(a->val < b->val)
            {
                last->next = a;
                last = a;
                a = a->next;
            }
            else
            {
                last->next = b;
                last = b;
                b = b->next;
            }
        }

        if(a==NULL)
            last->next = b;
        if(b==NULL)
            last->next = a;

        return first;
    }
};
