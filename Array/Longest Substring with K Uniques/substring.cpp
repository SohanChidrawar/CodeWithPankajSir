class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int res = -1;
        
        unordered_set<char>st;
        int n = s.size();
        
        for(int i=0;i<n;i++)
        {
            st.clear();
            
            for(int j=i;j<n;j++)
            {
                st.insert(s[j]);
                
                if(st.size() == k)
                    res = max(res,j-i+1);
            
                if(st.size()>k)
                    break;
            }
        }
        return res;
        
    }
};
