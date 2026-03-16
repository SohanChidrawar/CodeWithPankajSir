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

    void dfs(TreeNode* node, int target, int currsum, vector<int>&path, vector<vector<int>>&res)
    {
        if(node==NULL)
            return;

        currsum += node->val;
        path.push_back(node->val);

        if(currsum == target && node->left == NULL && node->right == NULL)
            res.push_back(path);

        dfs(node->left,target,currsum,path,res);
        dfs(node->right,target,currsum,path,res);

        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>path;

        dfs(root,targetSum,0,path,res);
        return res;
    }
};
