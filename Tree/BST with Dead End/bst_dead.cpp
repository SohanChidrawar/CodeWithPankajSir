/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
  
    bool solve(Node *root, int min, int max)
    {
        if(root==NULL)
            return false;
        if(min==max)
            return true;
        
        return solve(root->left,min,root->data-1) ||
               solve(root->right,root->data+1, max);
    }
  
    bool isDeadEnd(Node *root) {
        // Code here
        return solve(root,1,INT_MAX);
    }
};
