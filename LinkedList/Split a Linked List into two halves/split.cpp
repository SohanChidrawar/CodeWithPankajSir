/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        struct Node *slow = head;
        struct Node *fast = head;
        fast = fast->next;
        
        while(fast!=head && fast->next!=head)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        struct Node* ptr1 = slow;
        struct Node *ptr2 = slow->next;
        
        slow->next = head;
        struct Node *curr = ptr2;
        while(curr->next!=head)
            curr = curr->next;
        curr->next = ptr2;
        
        return {head,ptr2};
        
    }
};
