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
    bool checkTree(TreeNode* root) {
        if((root==NULL) || (root->left==NULL && root->right==NULL))
            return 1;
        
        int leftdata = 0;
        int rightdata = 0;
        
        if(root->left)
            leftdata = root->left->val;
        if(root->right)
            rightdata = root->right->val;
        
        if(root->val == (leftdata+rightdata))
            return checkTree(root->left) && checkTree(root->right);
        else
            return 0;
    }
};
