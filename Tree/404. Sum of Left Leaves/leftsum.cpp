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

    void leftleaves(TreeNode* root, int &sum)
    {
        if(!root)
            return;
        
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            sum += root->left->val;
        
        leftleaves(root->left,sum);
        leftleaves(root->right,sum);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;

        int sum = 0;
        leftleaves(root,sum);
        return sum;
        
    }
};
