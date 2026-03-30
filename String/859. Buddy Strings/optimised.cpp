/*
• 	If lengths differ → return .
• 	If :
• 	Return  if  has at least one duplicate character (so a swap can be made without changing the string).
• 	Otherwise:
• 	Find indices where .
• 	If there are exactly 2 mismatches, check if swapping those makes the strings equal.
• 	Otherwise return .
*/

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
