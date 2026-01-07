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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)
            return NULL;

        // check if there is atleast k node
        ListNode *node = head;
        for(int i=0;i<k;i++)
        {
            if(!node)
                return head;          // fewer then k node
            node = node->next;
        }

        ListNode *curr = head;
        ListNode *prev = NULL, *nxt = NULL;
        int count = 0;

        while(curr && count<k)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
        }

        if(nxt)
            head->next = reverseKGroup(nxt,k);

        return prev;
    }
};
