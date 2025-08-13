/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* prev,*curr,*ptr;
    if(head==NULL || head->next == NULL)
        return head;
    ptr = head->next;
    prev = NULL;
    curr = head;

    while(curr && curr->next)
    {
        struct ListNode* np,*sec;
        np = curr->next->next;
        sec = curr->next;

        //swap node
        sec->next = curr;
        curr->next = np;

        if(prev)
            prev->next = sec;
        
        prev = curr;
        curr = np;
    }
    return ptr;

}
