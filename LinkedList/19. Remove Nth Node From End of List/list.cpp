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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return NULL;

        int count = 0;
        ListNode *curr = head;
        while(curr)
        {
            count++;
            curr = curr->next;
        }   

        int k = count-n+1;
        if(k==1)
        {
            //case to remove head
            ListNode* temp = head->next;
            delete head;
            return temp;
        }

        curr = head;
        for(int i=1;i<k-1;i++)
        {
            curr = curr->next;
        }

        ListNode *prev = curr->next;
        curr->next = curr->next->next;
        delete prev;

        return head;
    }
};
