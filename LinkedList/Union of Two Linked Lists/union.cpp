/*
// structure of the node is as follows

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set<int> s;
        Node *curr = head1;
        
        while(curr)
        {
            s.insert(curr->data);
            curr = curr->next;
        }
        
        Node *ptr = head2;
        while(ptr)
        {
            s.insert(ptr->data);
            ptr = ptr->next;
        }
        
        Node *dummy = new Node(0);
        curr = dummy;
        
        for(int val:s)
        {
            curr->next = new Node(val);
            curr = curr->next;
        }
        
        return dummy->next;
    }
};
