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
    ListNode* oddEvenList(ListNode* head) {
        int n = 0;
        ListNode *curr = head;

        while(curr)
        {
            n++;
            curr = curr->next;
        }

        ListNode *eS=NULL, *eE=NULL, *oS=NULL, *oE=NULL;
        curr=head;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                if(oS==NULL)
                {
                    oS=curr;
                    oE=curr;
                }
                else
                {
                    oE->next=curr;
                    oE = oE->next;
                }
                curr = curr->next;
            }
            else
            {
                if(eS==NULL)
                {
                    eS=curr;
                    eE=curr;
                }
                else
                {
                    eE->next = curr;
                    eE = eE->next;
                }
                curr = curr->next;
            }
        }
        if(eS==NULL || oS==NULL)
            return head;
        oE->next = eS;
        eE->next = NULL;
        return oS;
    }
};
