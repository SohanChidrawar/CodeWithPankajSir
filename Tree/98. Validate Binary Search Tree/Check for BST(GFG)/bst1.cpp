class Solution {
  public:    
        void inorder(Node *root, vector<int>&ans)
        {
            if(!root)
                return;
            
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
        
        bool isBST(Node *root)
        {
            if(!root)
                return true;
            
            vector<int>result;
            inorder(root,result);
            
            for(int i=0;i<result.size()-1;i++)
            {
                if(result[i]>=result[i+1])
                    return false;
            }
            return true;
        }
};
