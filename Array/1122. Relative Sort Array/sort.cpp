class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>freq;

        for(int x: arr1)
            freq[x]++;
        
        vector<int>res;

        //placed elements in arr2 order
        for(int x: arr2)
        {
            while(freq[x]>0)
            {
                res.push_back(x);
                freq[x]--;
            }
        }

        //collect remaining elemets
        vector<int>remain;
        for(auto &it: freq)
        {
            while(it.second>0)
            {
                remain.push_back(it.first);
                it.second--;
            }
        }

        sort(remain.begin(),remain.end());
        res.insert(res.end(),remain.begin(),remain.end());

        return res;
        
    }
};
