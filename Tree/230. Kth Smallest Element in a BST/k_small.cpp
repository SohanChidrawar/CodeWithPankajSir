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

    int smallest(TreeNode *root, int k, int &count)
    {
        if(root==NULL)
            return -1;
        
        // If kth smallest is found in left 
        // subtree, then return it
        int left = smallest(root->left,k,count);
        if(left!=-1)
            return left;
        
        count++;
        // If curr node is kth smallest,
        // return it
        if(count==k)
            return root->val;
        
        // Else process the right subtree
        // and return its value
        int right = smallest(root->right,k,count);
        return right;
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;

        return smallest(root,k,count);
    }
};
