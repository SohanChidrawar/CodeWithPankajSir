/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include <math.h>

int height(struct TreeNode *node)
{
    if(node==NULL)
        return 0;
    
    return 1 + fmax(height(node->left),height(node->right));
}

bool isBalanced(struct TreeNode* root) {
    if(root==NULL)
        return true;

    int left = height(root->left);
    int right = height(root->right);

    if(abs(left - right)>1)
        return false;

    return isBalanced(root->left) && isBalanced(root->right);
}
