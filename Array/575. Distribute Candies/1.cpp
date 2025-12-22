class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();

        int count = 0;
        int nums = candyType[0];
        count++;

        for(int i=1;i<n;i++)
        {
            if(candyType[i]==nums)
                continue;
            else
            {
                nums = candyType[i];
                count++;
            }

            if(count>=n/2)
                break;
        }

        return count;


// TC: O(N)   must can't handle duplicate element above code 
