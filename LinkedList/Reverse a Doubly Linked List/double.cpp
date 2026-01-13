/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head == NULL || head->next == NULL)
            return head;
            
        Node *prev=NULL, *curr=head, *Next;
        
        while(curr)
        {
            Next = curr->next;
            curr->next = prev;
            curr->prev = Next;
            prev = curr;
            curr = Next;
        }
        
        return prev;
    }
};
