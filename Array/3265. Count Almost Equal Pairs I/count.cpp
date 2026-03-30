/*
- If x == y already → they are almost equal (no swap needed).
- Otherwise, you need to check if one swap in x or one swap in y can make them equal.
- That means:
- Compare the digits of x and y.
- If they differ in exactly two positions, swapping those two digits in one of the numbers should make them equal.
- If they differ in more than two positions → impossible.
- If they differ in exactly one position → impossible (a swap always changes two positions).
- If they differ in zero positions → possible only if the number has at least one duplicate digit (so swapping doesn’t change it).

*/

class Solution {
public:

    bool isalmostequal(int x, int y)
    {
        string a = to_string(x);
        string b = to_string(y);

        //Pad with leading zeros so both strings have equal length
        if (a.size() < b.size()) 
            a = string(b.size() - a.size(), '0') + a;
        if (b.size() < a.size())
            b = string(a.size() - b.size(), '0') + b;


        if(a==b)
            return true;


        // count number of mismatch in indices in both string
        vector<int>diff;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] != b[i])
                diff.push_back(i);
        }

        if(diff.size() == 2)
        {
            // check if swapping in a can fix
            int i = diff[0], j = diff[1];
            if((a[i] == b[j]) && (a[j] == b[i]))
                return true;
            
            // check if swapping in b can fix
            if((b[i] == a[j]) && (b[j] == a[i]))
                return true;
        }
        return false;
    }

    int countPairs(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(isalmostequal(nums[i],nums[j]))
                    ans++;
            }
        }
        return ans;
    }
};
