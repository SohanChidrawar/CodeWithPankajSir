/*
First, we create an index array idx, where each element is an index of the array nums. Then, we sort the index array 
idx based on the values in nums, with the sorting rule being 
nums[i]<nums[j], where i and j are two indices in the index array idx.

After sorting, we take the last k elements of the index array idx. These k elements correspond to the largest k
 elements in the array nums. Then, we sort these k indices to get the order of the largest k elements in the array 
nums.

The time complexity is O(nlogn), and the space complexity is O(logn). Here, 
n is the length of the array.
*/


class Solution {
public:
    vector<int> maxSubsequence(vector<int>& arr, int k) {
        int n = arr.size();

        // pair each element with it index
        vector<pair<int,int>>map;
        for(int i=0;i<n;i++)
            map.push_back({arr[i],i});
        
        //sort value by descending order
        sort(map.begin(),map.end(),[](auto &a, auto &b){
            return a.first>b.first;
        });

        // take top k element
        vector<pair<int,int>>select(map.begin(),map.begin()+k);

        // sort chosen element back to original position
        sort(select.begin(),select.end(),[](auto &a, auto &b){
            return a.second < b.second;
        });

        //extract value in original order  and return in vector
        vector<int>res;
        for(auto &p: select)
            res.push_back(p.first);

        return res;
    }
};
