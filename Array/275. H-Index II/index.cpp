class Solution {
public:
    int hIndex(vector<int>& citations) {
        // reverse(citations.begin(),citations.end());
        // int index = 0;
        // int n = citations.size();

        // while(index < n && citations[index] > index)
        //     index++;
        
        // return index;

        int n = citations.size();
        int left = 0, right = n-1;
        int ans=0;

        while(left <= right)
        {
            int mid = left + (right-left)/2;
            // number of citations > citations[mid]
            int h = n-mid;   

            if(citations[mid] >= h)
             {
                ans = h;
                right = mid-1;
             }
            else
                left = mid+1;
        }
        return ans;
    }
};
