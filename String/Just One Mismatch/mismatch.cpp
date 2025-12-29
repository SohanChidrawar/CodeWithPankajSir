// TC : O(N * L) where N is size of array and L is length of string

class Solution {
  public:
    string isStringExist(vector<string> arr, int N, string S) {
        // code here
         int n = S.length();
         
         for(int i=0;i<N;i++)
         {
            string x = arr[i];
            int m = x.length();
            int diff = 0;
            
            if(n==m)
            {
                for(int j=0;j<m;j++)
                {
                    if(x[j]!=S[j])
                        diff++;
                }
                if(diff==1)
                    return "True";
            }
         }
         return "False";
    }
};
