// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        stack<int> s;
        
        //Initialise current root as min possible value
        int root = INT_MIN;
        
        for(int i=0;i<N;i++)
        {
            // if we find a node who is at right side
            // and smaller then root return false
            if(arr[i] < root)
                return 0;
            
            // if arr[i] is in right subtree of stack top
            // keep removing item smaller then arr[i]
            // and make last remove item as root 
            while(!s.empty() && s.top() < arr[i])
            {
                root = s.top();
                s.pop();
            }
            
            s.push(arr[i]);
        }
        
        return 1;
    }
};
