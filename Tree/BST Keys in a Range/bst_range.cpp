class Solution {
  public:
    
    void printnode(Node *root, int low, int high,vector<int>&ans)
    {
        if(root==NULL)
            return;
        
        if(root->data >=low && root->data <=high)
        {
            printnode(root->left,low,high,ans);
            ans.push_back(root->data);
            printnode(root->right,low,high,ans);
        }
        
        else if(root->data<low)
            printnode(root->right,low,high,ans);
        else
            printnode(root->left,low,high,ans);
    }
    
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int>answer;
        
        printnode(root,low,high,answer);
        return answer;
    }
};
