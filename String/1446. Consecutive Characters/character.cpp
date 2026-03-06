class Solution {
public:
    int maxPower(string s) {
        int n = s.length();
        if(n==1)
            return 1;
        
        int max_cons = 1, curr_cons = 1;

        for(int i=1;i<n;i++)
        {
            if(s[i-1] == s[i])
            {
                curr_cons += 1;
                max_cons = max(max_cons,curr_cons);
            }
            else
                curr_cons = 1;
        }
        return max_cons;
    }
};
