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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head)
            return head;

        ListNode *ptr = head;
        int count = 0;

        while(ptr)
        {
            count++;
            ptr = ptr->next;
        }
        ListNode *first = head;
        for(int i=1;i<k;i++)
            first = first->next;

        ListNode *last = head;
        for(int j=1;j<count-k+1;j++)
            last = last->next;

        int data = first->val;
        first->val = last->val;
        last->val = data;

        return head;
    }
};
