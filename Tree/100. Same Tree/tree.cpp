/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if both nodes are NULL, they are identical
        if(p == NULL && q == NULL)
            return true;

        // if only one of the node is NULL, they are not identical
        if(p == NULL || q == NULL)
            return false;
        
        // check if values are equal and recursively check left and right subtree
        if(p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
        // values are not equal, they are not identical
        return false;
    }
};
