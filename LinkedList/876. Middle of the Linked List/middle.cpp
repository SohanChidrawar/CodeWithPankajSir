/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow,*fast;
    if(head==NULL)
        return head;
    if(head->next==NULL)
        return head;
    slow=fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
    
}
