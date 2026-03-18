class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int n = cost.size();
        
        int total = 0;
        for(int i=0;i<n;i++)
        {
            // skip every third candy
            if((i+1)%3 != 0)
                total += cost[i];
        }

        return total;
    }
};
