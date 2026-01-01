/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(!head || k==0)
            return head;
            
        int count=1;
        Node *curr = head;
        while(curr->next)
        {
            count++;
            curr = curr->next;
        }
        
        Node *prev = head;
        k = k%count;
        if(k==0)
            return head;
        
        for(int i=1;i<k;i++)
            prev = prev->next;
            
        Node *newhead = prev->next;
        curr->next = head;
        prev->next = NULL;
        
        return newhead;
    }
};
