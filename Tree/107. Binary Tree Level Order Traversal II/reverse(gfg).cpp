/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int>ans;
        if(!root)
            return ans;
        
        queue<Node *>q;
        q.push(root);
        while(!q.empty())
        {
            Node *ptr = q.front();
            ans.push_back(ptr->data);
            if(ptr->right)
                q.push(ptr->right);
            if(ptr->left)
                q.push(ptr->left);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
