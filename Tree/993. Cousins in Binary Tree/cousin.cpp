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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)
            return false;
        
        queue<TreeNode *>q;
        q.push(root);

        while(!q.empty())
        {
            int s = q.size();
            bool fx = false;
            bool fy = false;

            while(s--)
            {
                TreeNode *ptr = q.front();
                q.pop();

                if(ptr->left && ptr->right)
                {
                    // check x and y are sibling for same parent
                    if((ptr->left->val==x && ptr->right->val==y) || 
                    (ptr->left->val==y && ptr->right->val==x))
                        return false;
                }

                //check x and y at current level
                if(ptr->left)
                {
                    q.push(ptr->left);
                    if(ptr->left->val==x)
                        fx = true;
                    if(ptr->left->val==y)
                        fy = true;
                }

                if(ptr->right)
                {
                    q.push(ptr->right);
                    if(ptr->right->val==x)
                        fx = true;
                    if(ptr->right->val==y)
                        fy = true;
                }
            }
            // if both are at same level and a sibling
            if(fx && fy)
                return true;
            if(fx || fy)
                return false;
        }
        return false;
    }
};
