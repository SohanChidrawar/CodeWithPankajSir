/*
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

    TreeNode* buildtreeRec(int l, int h,vector<int>&postorder,unordered_map<int,int>&mp,
    int &index)
    {
        if(l>h)
            return NULL;
        
        int val = postorder[index];
        index--;
        TreeNode *node = new TreeNode(val);

        node->right = buildtreeRec(mp[val]+1,h,postorder,mp,index);
        node->left = buildtreeRec(l,mp[val]-1,postorder,mp,index);

        return node; 
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        int n = inorder.size();
        for(int i=0;i<n;i++)
            mp[inorder[i]] = i;

        int index = postorder.size()-1;
        TreeNode *root = buildtreeRec(0,n-1,postorder,mp,index);

        return root;
    }
};
