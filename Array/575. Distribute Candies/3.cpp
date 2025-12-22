class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n = candyType.size();

        unordered_set<int> candies(candyType.begin(),candyType.end());

        int count = candies.size();
        return min(count,n/2);
    }
};
