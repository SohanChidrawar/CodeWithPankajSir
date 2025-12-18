class Solution {
  public:
  
    void generate(int index,int n,string &s, set<string>&ans)
    {
        if(index==n)
        {
            ans.insert(s);
            return;
        }
        // for(int i=index;i<n;i++)
        // {
        //     swap(s[i],s[index]);
        //     generate(index+1,n,s,ans);
        //     swap(s[i],s[index]);
        // }
        
        unordered_set<char>use;
        for(int i=index;i<n;i++)
        {
            if(use.count(s[i]))
                continue;
            use.insert(s[i]);
            
            swap(s[i],s[index]);
            generate(index+1,n,s,ans);
            swap(s[i],s[index]);
        }
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        int n = s.size();
        set<string>st;
        generate(0,n,s,st);
        
        vector<string> ans(st.begin(),st.end());
        return ans;
    }
};
