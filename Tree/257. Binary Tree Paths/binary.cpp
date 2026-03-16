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

    void findpath(TreeNode* node, vector<string>&path, string temp)
    {
        if(node == NULL)
            return ;
        
        temp += to_string(node->val);

        if(node->left)
            findpath(node->left,path,temp + "->");
        
        if(node->right)
            findpath(node->right,path,temp + "->");

        if(node->left == NULL && node->right == NULL)
            path.push_back(temp);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>path;
        if(root == NULL)
            return path;

        findpath(root,path,"");
        return path;
    }
};
