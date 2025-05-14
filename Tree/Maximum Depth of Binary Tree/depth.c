/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include<math.h>

int maxDepth(struct TreeNode* root) {
    if(root==NULL)
        return 0;
    
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    int a = (left>right)?left:right;

    return 1+a;
    
}
