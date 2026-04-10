/*
Traverse through a[] and avoid duplicates while traversing. Since the arrays are sorted, we can avoid duplicates by matching with the previous element.
For every element of a[], check if it is in b[], If Yes, then add it to the result and do not traverse further in b[] to avoid duplicates.

O(n*m) Time and O(1) Space
*/

class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        int m = a.size();
        int n = b.size();
        vector<int>result;
        
        for(int i=0;i<m;i++)
        {
            if(i>0 && a[i-1] == a[i])
                continue;
            
            // check in b[] array
            for(int j=0;j<n;j++)
            {
                if(a[i] == b[j])
                {
                    result.push_back(a[i]);
                    break;
                }
            }
        }
        return result;
    }
};
