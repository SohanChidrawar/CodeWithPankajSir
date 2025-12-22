class Solution {
public:
    int distributeCandies(vector<int>& candyType) {


        int n = candyType.size();

        int count = 1;
        sort(candyType.begin(),candyType.end());

        for(int i=1;i<n;i++)
        {
            if(candyType[i-1]!=candyType[i])
                count++;
        }
        if(count<=n/2)
            return count;
        
        return n/2;

// O(nlogn):  due to sorting algorithm. Handle all test cases
