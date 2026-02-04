/*
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data =x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    
    Node *reverse(Node *head1)
    {
        Node *curr = head1;
        Node *prev = NULL;
        Node *Next;
        
        while(curr)
        {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    
    Node *merge(Node *l1, Node *l2)
    {
        Node *dummy = new Node(0);
        Node *tail = dummy;
        
        while(l1 && l2)
        {
            if(l1->data < l2->data)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1:l2;
        return dummy->next;
    }
    
    Node* sort(Node* head) {
        // Code here
        if(!head || !head->next)
            return head;
        
        Node *ptr = head;
        Node *curr = head->next;
        
        Node *p1 = ptr;
        Node *p2 = curr;
        
        
        while(p1->next && p2->next)
        {
            p1->next = p2->next;
            p1 = p1->next;
            
            if(p1->next)
            {
                p2->next = p1->next;
                p2 = p2->next;
            }
            else
            {
                p2->next = NULL;
                break;
            }
        }
        
        //explicitly terminate both LL list
        p1->next = NULL;
        if(p2)  p2->next = NULL;
        
        Node *ptr1 = reverse(curr);

        return merge(ptr,ptr1);
    }
};
