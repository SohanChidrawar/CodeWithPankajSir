/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    
    int countpath(Node *node, int k, int currsum, unordered_map<int,int>& prefixsum)
    {
        if(node==NULL)
            return 0;
            
        int path = 0;
        currsum += node->data;
        
        if(currsum == k)
            path++;
        
        // calculate currsum-k if this exist in hashmap
        // add into freq directly in path count
        path += prefixsum[currsum - k];
        
        // Add currsum into hashmap
        prefixsum[currsum]++;
        
        //explore left and right subtree
        path += countpath(node->left,k,currsum,prefixsum);
        path += countpath(node->right,k,currsum,prefixsum);
        
        prefixsum[currsum]--;
        
        return path;
        
    }
    
    int countAllPaths(Node *root, int k)
    {
        unordered_map<int,int>prefixsum;
        
        return countpath(root,k,0,prefixsum);
    }
};
