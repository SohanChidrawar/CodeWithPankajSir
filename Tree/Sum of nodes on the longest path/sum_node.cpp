/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  
    pair<int,int>fun(Node *root)
    {
        // height, sum
        
        if(!root)
            return {0,0};
        
        pair<int,int>left = fun(root->left);
        pair<int,int>right = fun(root->right);
        
        if(left.first > right.first)
            return {1+left.first, left.second+root->data};
        else if(left.first < right.first)
            return {1+right.first, right.second+root->data};
        else
            return {1+left.first, max(left.second,right.second)+root->data};
        
    }
  
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        pair<int,int>p = fun(root);
        return p.second;
    }
};
