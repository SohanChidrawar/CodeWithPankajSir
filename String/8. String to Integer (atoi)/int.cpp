class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int sign = 1;
        int index=0;
        long long sum = 0;

        // Handle leading whitespace
        while(index<n && s[index]==' ')
            index++;
        // Handle sign
        if(index<n && (s[index]=='-'||s[index]=='+'))
        {
            sign = (s[index]=='-')?-1:1;
            index++;
        }

        // Process digits and check for overflow
        while(index<n && s[index]>='0' && s[index]<='9')
        {
            int digit = s[index]-'0';

            if(sum>INT_MAX/10 || (sum==INT_MAX/10 && digit>7))
                return (sign==1)?INT_MAX:INT_MIN;

            sum = sum*10+digit;
            index++;
        }

        return sign*sum;
    }
};
