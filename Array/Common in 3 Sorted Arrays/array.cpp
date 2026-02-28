class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int m = arr1.size();
        int n = arr2.size();
        int o = arr3.size();
        int i=0,j=0,k = 0;
        vector<int>res;
        
        while(i<m && j<n && k<o)
        {
            if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
            {
                res.push_back(arr1[i]);
                i++;
                j++;
                k++;
                
                while(i<m && arr1[i] == arr1[i-1])
                    i++;
                while(j<n && arr2[j] == arr2[j-1])
                    j++;
                while(k<o && arr3[k] == arr3[k-1])
                    k++;
            }
            
            else if(arr1[i] < arr2[j])   i++;
            else if(arr2[j] < arr3[k])  j++;
            else    k++;
        }
        if(res.empty())
            return {-1};
        return res;
    }
};
