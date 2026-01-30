
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
        
        int num = stoi(s.substr(n-3));
        return (n%8 == 0)?1:-1;
        
    }
};
