/*
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

        void inorder(Node *root, int k, vector<int> &ans)
        {
            if(!root)
                return;
            
            inorder(root->left,k,ans);
            ans.push_back(root->data);
            inorder(root->right,k,ans);
            
        }
        
        int kthSmallest(Node *root, int k)
        {
            vector<int>ans;
            inorder(root,k,ans);
            
            if(k<=0 || k>ans.size())
                return -1;
            return ans[k-1];
                
        }
};
