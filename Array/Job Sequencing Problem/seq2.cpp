/*
The idea is to sort the jobs based on their deadlines in ascending order. This ensures that jobs with earlier deadlines are processed first, 
preventing situations where a job with a short deadline remains unscheduled because a job with a later deadline was chosen instead. We use a min-heap 
to keep track of the selected jobs, allowing us to efficiently replace lower-profit jobs when a more profitable job becomes available.

Step by Step implementation:

Store jobs as pairs of (Deadline, Profit).
Sort Jobs array in ascending order of deadline.
For each job in the sorted list:
If the job can be scheduled within its deadline, push its profit into the heap.
If the heap is full (equal to deadline), replace the existing lowest profit job with the current job if it has a higher profit.
This ensures that we always keep the most profitable jobs within the available slots.
Traverse through the heap and store the total profit and the count of jobs.
*/

class Solution {
  public:
    
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
    
    int n = deadline.size();
    vector<int> ans = {0, 0};
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; i++) {
        jobs.push_back({deadline[i], profit[i]});
    }

    // sort the jobs based on deadline
    // in ascending order
    sort(jobs.begin(), jobs.end());
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < jobs.size(); i++) {
        
        // if job can be scheduled within its deadline
        if (jobs[i].first > pq.size())
            pq.push(jobs[i].second);
        
        // replace the job with the lowest profit
        else if (!pq.empty() && pq.top() < jobs[i].second) {
            pq.pop();
            pq.push(jobs[i].second);
        }
    }

    while (!pq.empty()) {
        ans[1] += pq.top();
        pq.pop();
        ans[0]++;
    }

    return ans;
}

};
