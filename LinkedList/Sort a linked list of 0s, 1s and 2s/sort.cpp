/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        
        Node *ptr = head;
        while(ptr)
        {
            if(ptr->data == 0)
                c0++;
            else if(ptr->data == 1)
                c1++;
            else
                c2++;
            ptr = ptr->next;
        }
        
        Node *curr = head;
        while(curr)
        {
            for(int i=0;i<c0;i++)
            {
                curr->data = 0;
                curr = curr->next;
            }
            
            for(int i=0;i<c1;i++)
            {
                curr->data = 1;
                curr = curr->next;
            }
            
            for(int i=0;i<c2;i++)
            {
                curr->data = 2;
                curr = curr->next;
            }
        }
        return head;
    }
};
