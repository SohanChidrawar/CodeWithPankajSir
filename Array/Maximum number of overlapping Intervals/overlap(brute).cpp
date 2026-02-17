class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        
        int n = arr.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(auto &it : arr)
        {
            mini = min(mini,it[0]);
            maxi = max(maxi,it[1]);
        }
        
        int count = 0;
        
        for(int i=mini;i<maxi;i++)
        {
            int temp = 0;
            for(int j=0;j<n;j++)
            {
                if(arr[j][0]<=i && arr[j][1]>=i)
                    temp++;
            }
            
            count = max(temp,count);
        }
        
        return count;
    }
};
