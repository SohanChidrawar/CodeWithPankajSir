class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int max_capt = 0, curr_capt = 0;
        // last index where we saw 1 or -1
        int last = -1;

        for(int i=0;i<n;i++)
        {
            if(forts[i] == 1 || forts[i] == -1)
            {
                if(last != -1 &&  forts[i] != forts[last])
                {
                    // count zero betweem last and i
                    curr_capt = i-last-1;
                    max_capt = max(curr_capt,max_capt);
                }
                last = i; //update last forts position
            }
        }
        return max_capt;
    }
};
