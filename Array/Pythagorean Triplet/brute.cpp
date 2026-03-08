class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    int x = arr[i]*arr[i];
                    int y = arr[j]*arr[j];
                    int z = arr[k]*arr[k];
                    
                    if(x == y+z || y == x+z || z == x+y)
                        return true;
                }
            }
        }
        return false;
    }
};
