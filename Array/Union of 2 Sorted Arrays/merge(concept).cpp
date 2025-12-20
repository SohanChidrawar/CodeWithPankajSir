class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size();
        int m = b.size();
        int i = 0;
        int j = 0;
        vector<int>res;
        
        //skip the duplicate element
       
        while(i<n && j<m)
        {
             // skip duplicate in a[]
            if(i>0 && a[i]==a[i-1])
            {
                i++;
                continue;
            }
            //skip duplicate in b[]
            if(j>0 && b[j]==b[j-1])
            {
                j++;
                continue;
            }
            //select and add min element in ans
            if(a[i]<b[j])
            {
                res.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j])
            {
                res.push_back(b[j]);
                j++;
            }
            else  //both element are equal
            {
                res.push_back(a[i]);
                i++;
                j++;
            }
        }
            // add remaining element in result if any one array is finish
        // addd a[] in res
        while(i<n)
        {
            if(i>0 && a[i]==a[i-1])
            {
                i++;
                continue;
            }
            res.push_back(a[i]);
            i++;
        }
        // add b[] in res
        while(j<m)
        {
            if(j>0 && b[j]==b[j-1])
            {
                j++;
                continue;
            }
            res.push_back(b[j]);
            j++;
        }
        return res;
    }
    
};
