// TC : O(N^2)  bcz for loop can run for N time and reverse function take O(N) time to perform operation

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++)
        {
            string t = words[i];
            reverse(t.begin(), t.end());
            if(t==words[i])
                return t;
        }
        return "";

    }
};
