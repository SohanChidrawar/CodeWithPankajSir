class Solution {
  public:
  
    void printnode(Node *root, int low, int high, vector<int>&ans)
    {
        if(root==NULL)
            return;
        
        if(root->data>=low && root->data<=high)
            ans.push_back(root->data);
        
        printnode(root->left,low,high,ans);
        printnode(root->right,low,high,ans);
    }
    
    
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int>answer;
        
        printnode(root,low,high,answer);
        sort(answer.begin(),answer.end());
        return answer;
    }
};
