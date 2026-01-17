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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        
        int flag = 1;
        queue<TreeNode *>q;
        q.push(root);

        while(!q.empty())
        {
            vector<int>levelorder;
            int s = q.size();

            while(s--)
            {
                TreeNode *t = q.front();
                q.pop();
                levelorder.push_back(t->val);

                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }

            if(flag%2==0)
                reverse(levelorder.begin(),levelorder.end());
            flag++;
            ans.push_back(levelorder);
        }
        return ans;
    }
};
