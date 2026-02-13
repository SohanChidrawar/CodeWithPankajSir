/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        if(!root)   return ans;
        queue<Node *>q;
        q.push(root);
        int n;
        
        while(!q.empty())
        {
            n = q.size();
            for(int i=0;i<n;i++)
            {
                Node *temp = q.front();
                
                q.pop();
                if(i==0)    ans.push_back(temp->data);    
                if(temp->left)  q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};
