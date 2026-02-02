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
    ListNode* sortList(ListNode* head) {
        if(!head)
            return NULL;

        vector<int>arr;
        ListNode *ptr = head;
        while(ptr)
        {
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }

        sort(arr.begin(),arr.end());

        ListNode *curr = head;
        int i=0;
        while(curr)
        {
            curr->val = arr[i++];
            curr = curr->next; 
        }
        return head;
    }
};
