/*
In C++, std::string::npos is a static member constant used to indicate that a character or substring was not found in a string or to denote the maximum 
possible length/position in a string. 

Meaning: npos stands for "no position"

TC:O(N)
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if(n!=m)
            return false;
        
        string t = s+s;

        return t.find(goal) != string::npos;
         
    }
};
