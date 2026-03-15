class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversed = 0;
        int ptr = num;

        while(ptr>0)
        {
            reversed = reversed * 10 + (ptr%10);
            ptr = ptr/10;
        }
        
        ptr = reversed;
        int reverse = 0;
        while(ptr>0)
        {
            reverse = reverse*10 + (ptr%10);
            ptr = ptr/10;
        }

        return reverse == num;
    }
};
