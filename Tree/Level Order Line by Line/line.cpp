/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        vector<vector<int>> ans;
        queue<Node *>q;
    
        if(!root)
            return ans;

        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int>level;

            for(int i=0;i<size;i++)
            {
                Node *temp = q.front();
                level.push_back(temp->data);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                q.pop();
            }
            ans.push_back(level);
        }
        return ans;
    }
};
