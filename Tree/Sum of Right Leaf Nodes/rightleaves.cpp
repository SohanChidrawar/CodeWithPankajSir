/*Structure of the node of the binary tree is as


/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// right leaf nodes
class Solution {
  public:
  
    void rightleaves(Node* root, int &sum)
    {
        if(!root)
            return;
        
        if(root->right!=NULL && root->right->right==NULL && root->right->left==NULL)
            sum += root->right->data;
        
        rightleaves(root->left,sum);
        rightleaves(root->right,sum);
    }
  
    int rightLeafSum(Node* root) {
        // Code here
        if(!root)
        return 0;
        
        int sum = 0;
        rightleaves(root,sum);
        
        return sum;
    }
};
