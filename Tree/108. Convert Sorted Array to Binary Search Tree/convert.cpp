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

    TreeNode* bst(vector<int>& nums,int l, int r)
    {
        if(l>r)
            return NULL;
        
        int mid = l + (r-l)/2;
        TreeNode *ptr = new TreeNode(nums[mid]);
        ptr->left = bst(nums,l,mid-1);
        ptr->right = bst(nums,mid+1,r);
        return ptr;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;

        TreeNode *node = bst(nums,l,r);
        return node;
    }
};
