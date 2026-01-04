// User function template for C++
class Solution {
  public:

    int penaltyScore(string S) {
        // Your code goes here
        int n = S.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x = S[i]-'0';
            int y = S[i+1]-'0';
            
            if(x==2 && y==1)
                count++;
        }
        return count;
    }
};
