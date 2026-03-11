// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        // Your code goes here
        int m = arr1.size();
        int n = arr2.size();
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        int i=0,j=0,k=0;
        //clear before filling
        res.clear();
        
        while(i<m && j<n)
        {
            if(arr1[i]<arr2[j])
                res.push_back(arr1[i++]);
            else
                res.push_back(arr2[j++]);
        }
        
        while(i<m)
            res.push_back(arr1[i++]);
        
        while(j<n)
            res.push_back(arr2[j++]);
            

    }
};
