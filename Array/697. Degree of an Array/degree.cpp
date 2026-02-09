/*
1. 	Traverse the array and record:
 	Frequency of each number.
 	First occurrence index.
 	Last occurrence index.
2. 	The degree = maximum frequency.
3. 	For each number with frequency = degree:
 	Compute subarray length = lastindex - firstindex + 1
 	Track the minimum length.
*/

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>first,last,freq;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            if(first.find(x) == first.end())
                first[x] = i;
            last[x] = i;
            freq[x]++;
        }

        int degree = 0;
        for(auto &p: freq)
            degree = max(degree, p.second);
        
        int ans = n;
        for(auto &p:freq)
            if(p.second == degree)
                ans = min(ans,last[p.first]-first[p.first] + 1);
        
        return ans;

    }
};
