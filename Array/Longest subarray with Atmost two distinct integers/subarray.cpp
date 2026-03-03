/*
The Idea is to use a sliding window with two pointers to maintain a subarray with at most two distinct elements. 
Expand the right pointer to include new elements, and move the left pointer to shrink the window whenever the count of distinct elements exceeds two. 
Track the maximum window size throughout.

Step By Step Implementation:

1) Initialize a map to count frequencies, and two pointers i and j for the window.
2) Start a while loop to expand the window by moving j from 0 to end of the array.
3) Add arr[j] to the map and increment its frequency.
4) If map size > 2, shrink the window from the left by moving i.
5) While shrinking, decrement frequency of arr[i] and remove it if frequency becomes 0.
6) Update the maximum window size when the current window is valid (at most 2 distinct).
7) Increment j to continue sliding the window forward.
8) After the loop, return the maximum size found.
*/


class Solution {
  public:
    int totalElements(vector<int> &arr) {
    
        int n = arr.size();
        map<int,int>mp;
        int i=0,j=0;
        int size = 0;
        
        while(j<n)
        {
            mp[arr[j]]++;
            
            while(mp.size()>2)
            {
                mp[arr[i]]--;
            
                if(mp[arr[i]] == 0)
                    mp.erase(arr[i]);
                
                i++;
            }
            
            size = max(size, j-i+1);
            j++;
        }
        
        return size;

    }
};
