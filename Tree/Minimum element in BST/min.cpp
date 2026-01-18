/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        // code here
        if(root==NULL)
            return -1;
        
        if(root->left)
            return minValue(root->left);
        else
            return root->data;
    }
};
