/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    Node *inorderpred(Node *root)
    {
        Node *ptr = root->left;
        while(ptr->right)
            ptr = ptr->right;
        return ptr;
    }
    
    Node *inordersucc(Node *root)
    {
        Node *ptr = root->right;
        while(ptr->left)
            ptr = ptr->left;
        return ptr;
    }
    
    void preorder(Node *root, Node *&pre, Node *&succ, int key)
    {
        if(root==NULL)
            return;
        
        if(root->data==key)
        {
            if(root->left)
                pre = inorderpred(root);
            if(root->right)
                succ = inordersucc(root);
            return ;
        }
        if(key<root->data)
        {
            succ = root;
            preorder(root->left,pre,succ,key);
        }
        else if(key>root->data)
        {
            pre = root;
            preorder(root->right,pre,succ,key);
        }
    }
    
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        
        Node* pre = nullptr;
        Node* suc = nullptr;
        preorder(root, pre, suc,key);
        return {pre, suc};
        
    }
};
