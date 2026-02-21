class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int index = 0;
        int n = citations.size();

        while(index<n && citations[index] > index)
            index++;
        
        return index;
    }
};
