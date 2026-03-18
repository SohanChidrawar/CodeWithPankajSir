/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    
    int candies(Node *node, int &ans)
    {
        if(node == NULL)
            return 0;
            
        // traver left substree
        int l = candies(node->left,ans);
        
        // traverse right subtree
        int r = candies(node->right, ans);
        
        ans += abs(l) + abs(r);
        
        // return number of node to balance root node
        return node->data + l + r - 1;
        
    }
  
    int distCandy(Node* root) {
        // code here
        int ans = 0;
        candies(root,ans);
        return ans;
    }
};
