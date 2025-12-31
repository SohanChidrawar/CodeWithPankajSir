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
    bool isPalindrome(ListNode* head) {
        ListNode *slow,*fast;
        slow = fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev,*curr,*Next;
        prev = NULL;
        curr = slow;
        while(curr)
        {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }

        ListNode *ptr = head;
        while(ptr && prev)
        {
            if(ptr->val != prev->val)
                return false;
            ptr = ptr->next;
            prev = prev->next;
        }
        return true;

    }
};
