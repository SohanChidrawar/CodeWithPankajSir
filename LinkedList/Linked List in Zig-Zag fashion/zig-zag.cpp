/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* zigZag(Node* head) {
        // your code goes here
        Node *ptr = head;
        int i=0;
        
        while(ptr && ptr->next)
        {
            if(i%2==0 && ptr->data > ptr->next->data)
                swap(ptr->data, ptr->next->data);
            else if(i%2==1 && ptr->data < ptr->next->data)
                swap(ptr->data, ptr->next->data);
            
            i++;
            ptr = ptr->next;
        }
        return head;
    }
};
