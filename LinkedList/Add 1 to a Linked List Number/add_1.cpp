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
    
    Node *reverse(Node *head)
    {
        Node *prev=NULL;
        Node *curr=head;
        while(curr)
        {
            Node *Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    
    Node* addOne(Node* head) {
        // Your Code here
        head = reverse(head);
        Node *curr = head;
        
        while(curr)
        {
            if(curr->data==9 && curr->next==NULL)
            {
                curr->data = 1;
                Node *newnode = new Node(0);
                newnode->next = head;
                head = newnode;
                curr = curr->next;
            }
            else if(curr->data == 9)
            {
                curr->data = 0;
                curr = curr->next;
            }
            else
            {
                curr->data = curr->data+1;
                break;
            }
        }
        head = reverse(head);
        return head;
      
        // return head of list after adding one
    }
};
