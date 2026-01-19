/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    
    void inorder(Node *root, vector<int>&in)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,in);
        in.push_back(root->data);
        inorder(root->right,in);
    }
  
    void merge(vector<int>&ans, vector<int>&res,vector<int>&merge)
    {
        int i=0,j=0;
        int m = ans.size();
        int n = res.size();
        
        while(i<m && j<n)
        {
            if(ans[i]<res[j])
                merge.push_back(ans[i++]);
                
            else if(ans[i]>res[j])
                merge.push_back(res[j++]);
                
            else
            {
                merge.push_back(ans[i++]);
                merge.push_back(res[j++]);
            }
        }
        
        while(i<m)
            merge.push_back(ans[i++]);
        
        while(j<n)
            merge.push_back(res[j++]);
    }
    
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int>ans;
        vector<int>res;
        vector<int>merged;
        
        inorder(root1,ans);
        inorder(root2,res);
        
        merge(ans,res,merged);
        return merged;
    }
};
