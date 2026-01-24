/*
class Node {
  public:
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
  
    Node *reverse(Node *head)
    {
        Node *prev=NULL, *curr=head;
        
        while(curr)
        {
            Node *Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
  
    Node *addLL(Node *head1, Node *head2, int &carry)
    {
        if(!head1 && !head2 && carry==0)
            return NULL;
        
        int sum = carry;
        
        if(head1!=NULL)
        {
            sum += head1->data;
            head1 = head1->next;
        }
        
        if(head2!=NULL)
        {
            sum += head2->data;
            head2 = head2->next;
        }
        
        carry = sum/10;
        
        Node *newnode = new Node(sum%10);
        newnode->next = addLL(head1,head2,carry);
        return newnode;
        
    }
    
    Node *removeleadingzero(Node *head)
    {
        while(head && head->data==0 && head->next)
            head = head->next;
        
        return head;
    }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        
        
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        int carry = 0;
        Node *result = addLL(head1,head2,carry);
        
        if(carry!=0)
        {
            Node *ptr = new Node(carry);
            ptr->next = result;
            result = ptr;
        }
        
        result = reverse(result);
        return removeleadingzero(result);
        
    }
};
