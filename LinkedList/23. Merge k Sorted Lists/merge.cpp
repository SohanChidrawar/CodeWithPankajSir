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

    ListNode *merge(ListNode *head1,ListNode *head2)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *curr = dummy;

        while(head1 && head2)
        {
            if(head1->val < head2->val)
            {
                curr->next = head1;
                head1 = head1->next;
            }
            else
            {
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }

        if(head1)
            curr->next = head1;
        if(head2)
            curr->next = head2;

        return dummy->next;
    }

    ListNode* mergelistrec(int i, int j, vector<ListNode*>& lists)
    {
        if(i==j)    return lists[i];

        int mid = i+(j-i)/2;

        ListNode *head1 = mergelistrec(i,mid,lists);
        ListNode *head2 = mergelistrec(mid+1,j,lists);
        ListNode *head = merge(head1,head2);

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0)
            return NULL;

        return mergelistrec(0,n-1,lists);
    }
};
