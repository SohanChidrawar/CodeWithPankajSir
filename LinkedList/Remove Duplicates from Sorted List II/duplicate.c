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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
        dummy->next = head;
        ListNode *prev,*curr;
        prev = dummy;
        curr = head;

        while(curr)
        {
            bool duplicate = false;
            while(curr->next && curr->val == curr->next->val)
            {
                duplicate = true;
                curr = curr->next;
            }

            if(duplicate)
                prev->next = curr->next;
            else
                prev = prev->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};
