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

    TreeNode *buildtreeRec(int l, int h, vector<int>& preorder,unordered_map<int,int>&mp,
    int &index)
    {
        if(l>h)
            return NULL;
        
        int val = preorder[index];
        index++;
        TreeNode *node = new TreeNode(val);

        node->left = buildtreeRec(l,mp[val]-1,preorder,mp,index);
        node->right = buildtreeRec(mp[val]+1,h,preorder,mp,index);

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;

        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]] = i;
        
        int index = 0;

        TreeNode *Node = buildtreeRec(0,preorder.size()-1,preorder,mp,index);

        return Node;
    }
};
