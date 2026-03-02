// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool ispossible(vector<int>& arr, int position)
    {
        int n = arr.size();
        if(position == n-1)
            return true;
        
        int long_jump = min((position+arr[position]), n-1);
        
        for(int i = position+1 ; i<long_jump+1;i++)
        {
            if(ispossible(arr,i))
                return true;
        }
        
        return false;
    }
    
    bool canReach(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        return ispossible(arr,0);
    }
};
