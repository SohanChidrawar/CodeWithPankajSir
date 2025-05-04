/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* ptr = head;
    struct ListNode* prev = NULL;
//    struct ListNode* a;

    while(ptr!=NULL)
    {
        if(ptr->val == val)
        {
            if(prev)
            {
                prev->next = ptr->next;
                // a = ptr;
                // ptr = ptr->next;
                // free(a);
                // return head;
            }     
            else
            {
                head = ptr->next;
                // a = ptr;
                // ptr = ptr->next;
                // free(a);
                // return head;
            }
            // struct ListNode* toDelete = ptr;
            // ptr = ptr->next;
            // free(toDelete);
            ptr = ptr->next;
        }
        else
        {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    return head;
}
