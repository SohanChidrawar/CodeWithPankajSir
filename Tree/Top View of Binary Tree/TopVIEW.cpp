/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int>result;
        
        if(!root)
            return result;
            
        // map to store the node along with their horizontal distance(hd)
        map<int, int>mp;
        
        // queue to do level order traversal
        queue<pair<Node*, int>>q;
        
        q.push({root,0});       //for root node hd is 0
        
        while(!q.empty())
        {
            auto nodehd = q.front();
            
            //current node
            Node *node = nodehd.first;
            
            //for selected node curr hd is 
            int hd = nodehd.second;
            q.pop();
            
            if(mp.find(hd) == mp.end())
                mp[hd] = node->data;
            
            // add left child to the queue is it exist
            if(node->left)
                q.push({node->left,hd-1});
            
            // add right child to queue if it exist
            if(node->right)
                q.push({node->right,hd+1});
            
        }
        
        for(auto it:mp)
            result.push_back(it.second);
        
        return result;
    }
};
