// User function Template for C++

/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/

class Solution {
  public:
    // Function to find largest subtree sum.
    
    int sum(Node *root, int &ans)
    {
        if(root==NULL)
            return 0;
        
        int currsum = root->data+sum(root->left,ans)+sum(root->right,ans);
        
        if(currsum>ans)
            ans = currsum;
        return currsum;
    }
    
    int findLargestSubtreeSum(Node* root) {
        // Write your code here
        if(root==NULL)
            return 0;
        
        int ans = INT_MIN;
        
        sum(root,ans);
        return ans;
    }
};
