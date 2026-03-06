class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);

        int n = s.length();
        int l=-1,r=-1;
        int index = -1;
        char digit = '0';

        for(int i=n-1;i>=0;i--)
        {
            if(s[i] > digit)
            {
                digit = s[i];
                index = i;
            }
            else if(s[i] < digit)
            {
                l = i;
                r = index;
            }
        }

        if(l==-1)
            return num;
        
        swap(s[l],s[r]);
        return stoi(s);
    }
};
