class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        int ceil = -1;
        
        while(root)
        {
            // ceil is root of data
            if(root->data == x)
                return root->data;
            
            // if ceil is greater then root
            // of data
            if(x > root->data)
                root = root->right;
            
            // else either root can be ceil or
            // node is in left subtree
            else
            {
                ceil = root->data;
                root = root->left;
            }
        }
        
        return ceil;
    }
};
