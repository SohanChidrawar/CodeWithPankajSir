/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* ptr = head;
    int num = 0;
    while(ptr)
    {
        num = num*2 + ptr->val;
        ptr = ptr->next;
    }
    return num;
}
