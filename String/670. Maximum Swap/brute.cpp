        int n = s.length();
        string ans = s;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(s[i],s[j]);
                ans = max(ans,s);
                
                //backtrack
                swap(s[i],s[j]);
            }
        }
        return ans;
