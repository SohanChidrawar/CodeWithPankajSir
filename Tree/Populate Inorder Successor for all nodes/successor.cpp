/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    void populate(Node *root, Node *&prev)
    {
        if(!root)   return;
        
        populate(root->left, prev);
        if(prev!=NULL)
            prev->next = root;
        prev = root;
        populate(root->right,prev);
    }
  
    void populateNext(Node *root) {
        // code here
        Node *prev = NULL;
        populate(root, prev);
        
        
    }
};
