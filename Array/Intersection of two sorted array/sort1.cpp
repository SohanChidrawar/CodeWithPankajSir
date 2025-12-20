class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int m = arr2.size();
        int i=0;
        int j=0;
        vector<int> ans;
        set<int>s ;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
                i++;
            else if(arr1[i]>arr2[j])
                j++;
            else
            {
                // both element are same
                if(ans.empty() || ans.back()!=arr1[i])
                {
                    ans.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
        }
