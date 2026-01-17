/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int solve(Node *node)
    {
        if(!node)
            return 0;
        
        int x = node->data;
        int lst = solve(node->left);
        int rst = solve(node->right);
        node->data = lst+rst;
        return lst+rst+x;
    }

    void toSumTree(Node *node) {
        // Your code here

        solve(node);
    }
};
