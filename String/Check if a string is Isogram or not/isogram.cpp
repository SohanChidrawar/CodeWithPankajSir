// TC : O(N logN) + O(N) = O(N logN)

class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        int n = s.length();
        
        sort(s.begin(),s.end());
        
        for(int i=1;i<=n;i++)
        {
            if(s[i]==s[i-1])
                return false;
        }
        return true;
    }
};
