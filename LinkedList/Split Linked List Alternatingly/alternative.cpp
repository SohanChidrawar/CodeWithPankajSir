/*
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
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        struct Node *first = new Node(-1);
        struct Node *f = first;
        struct Node *second = new Node(-1);
        struct Node *s = second;
        
        while(head && head->next)
        {
            f->next = head;
            f = f->next;
            s->next = head->next;
            s = s->next;
            head = head->next->next;
        }
        
        f->next = head;
        s->next = NULL;
        return {first->next, second->next};
        
    }
};
