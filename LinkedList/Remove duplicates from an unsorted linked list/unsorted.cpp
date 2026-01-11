/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        map<int,int>m;
        Node *curr = head;
        Node *prev = curr;
        m[curr->data] = 1;
        curr = curr->next;
        
        while(curr)
        {
            if(m[curr->data]==1)
            {
                prev->next = curr->next;
                free(curr);
            }
            else
            {
                m[curr->data] = 1;
                prev = curr;
            }
            curr = prev->next;
        }
        return head;
    }
};
