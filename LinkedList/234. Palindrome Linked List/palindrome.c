/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode* ptr = head;
    int c1=0;
    while(ptr!=NULL)
    {
        c1++;
        ptr = ptr->next;
    }
    ptr = head;
    int A[c1];
    for(int i=0;i<c1;i++)
    {
        A[i] = ptr->val;
        ptr = ptr->next;
    }

    // checking palindrome
    int i=0;
    int j = c1-1;
    while(i<j)
    {
        if(A[i] != A[j])
            return false;
        i++;
        j--;
    }
    return true;
}
