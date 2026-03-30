class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.size();

        
        if(n != goal.size())
            return false;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(s[i],s[j]);
                if(s==goal)
                    return true;
                else
                    swap(s[i],s[j]);
            }
        }
        return false;
    }
};
