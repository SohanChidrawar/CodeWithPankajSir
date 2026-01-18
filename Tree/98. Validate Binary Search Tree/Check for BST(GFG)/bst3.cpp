/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
        
        bool inorder(Node *root, int &prev)
        {
            if(!root)
                return true;
            
            if(!inorder(root->left,prev))
                return false;
            
            if(prev > root->data)
                return false;
            
            prev = root->data;
            
            return inorder(root->right,prev);
        }
        
        bool isBST(Node *root)
        {
            int prev = INT_MIN;
            
            return inorder(root,prev);
        }
};
