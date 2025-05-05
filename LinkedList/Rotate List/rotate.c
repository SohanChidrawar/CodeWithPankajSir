/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* prev, *curr;
    if(head == NULL || head->next == NULL || k==0)
        return head;
    int count=1;
    prev = head;
    while(prev->next!=NULL)
    {
        count++;
        prev = prev->next;
    }
    //optimise to avoid unnecessary rotation
    k = k % count;
    if(k==0)
        return head;

    curr=head;
    for(int i=0;i<count-k-1;i++)
        curr = curr->next;
    
    struct ListNode* newhead = curr->next;
    curr->next = NULL;
    prev->next = head;

    return newhead;

}
