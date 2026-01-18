class Solution {
  public:
  
    bool check(Node *node, int min, int max)
    {
        if(node == NULL)
            return true;
        
        if(node->data < min || node->data > max)
            return false;
        
        return check(node->left,min,node->data-1) &&
              check(node->right,node->data+1,max);
        
    }
    
    bool isBST(Node* root) {
        // code here
        int min  = INT_MIN;
        int max = INT_MAX;
        
        return check(root, INT_MIN, INT_MAX);
    
    }
};
