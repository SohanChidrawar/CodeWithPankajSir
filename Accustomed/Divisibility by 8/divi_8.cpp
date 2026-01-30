
class Solution {
  public:
    int DivisibleByEight(string s) {
        // code here
        int n = s.size();
        if(n<3)
        {
            int num = stoi(s);
            return (num%8==0)?1:-1;
        }
        
        int num = (s[n-3]-'0')*100 + (s[n-2]-'0')*10 + (s[n-1]-'0');
        return (num%8 == 0)? 1 : - 1 ;
    }
};
