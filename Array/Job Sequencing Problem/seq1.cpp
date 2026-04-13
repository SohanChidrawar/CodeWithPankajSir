/*
Using Sorting - O(n2) Time and O(n) Space
The idea is to sort the jobs in descending order of profit and for each job, try to place it in the latest available 
slot before its deadline. This ensures maximum profit while keeping earlier slots free for other jobs.
*/

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        int n = deadline.size();
        int cnt = 0;
        int profits = 0;
        
        vector<pair<int,int>>jobs;
        
        for(int i=0;i<n;i++)
            jobs.push_back({profit[i],deadline[i]});
        
        sort(jobs.begin(),jobs.end(),greater<pair<int,int>>());
        
        vector<int>slot(n,0);
        
        for(int i=0;i<n;i++)
        {
            int start = min(n,jobs[i].second)-1;
            
            for(int j=start;j>=0;j--)
            {
                if(slot[j] == 0)
                {
                    slot[j] = 1;
                    cnt++;
                    profits += jobs[i].first;
                    break;
                }
            }
        }
        return {cnt,profits};
    }
};
