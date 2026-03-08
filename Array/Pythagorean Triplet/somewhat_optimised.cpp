class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i=0;i<n;i++)
            arr[i] = arr[i]*arr[i];
        
        sort(arr.begin(),arr.end());
        
        for(int i=n-1;i>1;i--)
        {
            int l = 0;
            int r = i-1;
            int sum = arr[i];
            while(l<r)
            {
                if(arr[l]+arr[r] == sum)
                    return true;
                else if(arr[l]+arr[r] < sum)
                    l++;
                else
                    r--;
            }
        }
        return false;
    }
};
