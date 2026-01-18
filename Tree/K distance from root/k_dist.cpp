/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // function should print the nodes at k distance from root
    
    void distance(Node *root, int k, vector<int>&result)
    {
        if(!root)
            return;
        
        if(k==0)
            result.push_back(root->data);
        
        distance(root->left,k-1,result);
        distance(root->right,k-1,result);
    }
    
    vector<int> Kdistance(Node *root, int k) {
        // Your code here
        vector<int>result;
        
        distance(root,k,result);
        return result;
    }
};
