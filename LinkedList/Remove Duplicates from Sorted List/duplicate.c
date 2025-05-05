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
        ListNode* curr, *prev, *ptr,*node;
        node = head;
        prev = node;
        if(node == NULL)
            return head;
        curr = node->next;
        while(curr!=NULL)
        {
            if(prev->val == curr->val)
            {
                //ptr = curr;            
                prev->next = curr->next;
                curr = curr->next;
                //free(ptr);
            }
            else
            {
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head;
    }
};
