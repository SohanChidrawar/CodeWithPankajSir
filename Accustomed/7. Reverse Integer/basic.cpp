class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        if(x<0)
            flag = true;

        int reversed = 0;
        int temp = abs(x);

        while(temp!=0)
        {
            reversed = reversed*10 + (temp%10);
            temp = temp/10;
        }

        if(flag)
            return -reversed;
        return reversed;
    }
};
