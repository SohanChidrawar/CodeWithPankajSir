/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    void inorder(Node *root, vector<int>&nodes)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,nodes);
        nodes.push_back(root->data);
        inorder(root->right,nodes);
    }
    
    void bst(Node *root, vector<int> nodes, int &index)
    {
        if(root==NULL)
            return;
        
        bst(root->left,nodes,index);
        root->data = nodes[index++];
        bst(root->right,nodes,index);
    }
    
    Node *binaryTreeToBST(Node *root) {
        // Your code goes here
        vector<int> nodes;
        inorder(root,nodes);
        
        sort(nodes.begin(),nodes.end());
        
        int index = 0;
        
        bst(root,nodes,index);
        return root;
    }
};
