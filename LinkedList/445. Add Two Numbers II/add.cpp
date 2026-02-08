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
        ListNode *curr=head, *prev=NULL;

        while(curr)
        {
            ListNode *Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }

    ListNode *addtwolist(ListNode *l1, ListNode *l2, int &carry)
    {
        if(!l1 && !l2 && carry==0)
            return NULL;
        
        int sum = carry;
        if(l1!=NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum/10;

        ListNode *newnode = new ListNode(sum%10);
        newnode->next = addtwolist(l1,l2,carry);
        return newnode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1 = reverse(l1);
        ListNode *ptr2 = reverse(l2);
        int carry = 0;
        ListNode *result = addtwolist(ptr1,ptr2,carry);
        if(carry!=0)
        {
            ListNode *extra = new ListNode(carry);
            extra->next = result;
            result = extra;   
        }

        return reverse(result);
    }
};
