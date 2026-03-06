class Solution {
public:
    int minimumChairs(string s) {
        int n = s.length();

        int max_chair = 0;
        int curr_chair = 0;

        for(char ch : s)
        {
            if(ch == 'E')
                curr_chair += 1;
            else
                curr_chair -= 1;
            
            max_chair = max(curr_chair,max_chair);
        }
        return max_chair;

    }
};
