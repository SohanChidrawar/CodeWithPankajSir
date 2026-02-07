/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution {
  public:
    Node* pairWiseSwap(Node* head) {
        if(!head || !head->next)
            return head;
        
        Node *newhead = head->next;
        Node *curr = head, *prev = NULL;
        
        while(curr && curr->next)
        {
            Node *ptr = curr->next;
            Node *Next = ptr->next;
            
            // swap the node
            ptr->next = curr;
            curr->next = Next;
            
            if(prev)
                prev->next = ptr;
                
            prev = curr;
            curr = Next;
        }
        return newhead;
    }
};
