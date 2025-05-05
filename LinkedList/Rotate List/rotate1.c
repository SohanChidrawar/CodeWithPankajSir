/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* prev, *curr;
    prev = NULL;
    curr = head;
    if(head == NULL || head->next == NULL || k==0)
        return head;
    while(k!=0)
    {
        while(curr->next!=NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        curr->next = head;
        head = curr;
//      prev = NULL;
        k--;
    }
    return head;
}
