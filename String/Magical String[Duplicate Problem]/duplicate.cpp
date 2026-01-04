class Solution {
  public:
    string magicalString(string S) {
        // code here
        int n = S.length();
        
        for(int i=0;i<n;i++)
        {
            char index = 219-S[i];
            swap(S[i],index);
        }
        return S;
    }
};
