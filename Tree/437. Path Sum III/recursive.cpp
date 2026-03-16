/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    
    int countpath(Node *node,int k,int currsum)
    {
        if(node==NULL)
            return 0;
        
        int path = 0;
        currsum += node->data;
        
        if(currsum == k)
            path++;
        
        path += countpath(node->left,k,currsum);
        path += countpath(node->right,k,currsum);
        
        return path;
    }
  
    int countAllPaths(Node *root, int k) {
        // code here
        if(root == NULL)
            return NULL;
            
        int res = countpath(root,k,0);
        
        // explore left and right subtree
        res += countAllPaths(root->left,k);
        res += countAllPaths(root->right,k);
        
        return res;
    }
    

};
