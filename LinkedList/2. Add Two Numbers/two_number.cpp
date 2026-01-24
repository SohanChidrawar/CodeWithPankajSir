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

    ListNode* addLL(ListNode* l1, ListNode* l2, int &carry)
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

        ListNode* newnode = new ListNode(sum%10);
        newnode->next = addLL(l1,l2,carry);
        return newnode; 
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;

        ListNode *result = addLL(l1,l2,carry);

        if(carry!=0)
        {
            ListNode *ptr = new ListNode(carry);
            ptr->next = result;
            result = ptr;
        }

        return result;
    }
};
