class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int *left = new int[n];
        int *right = new int[n];
        int count = 0;

        left[0] = height[0];
        right[n-1] = height[n-1];
        
        for(int i=1;i<n;i++)
            left[i] = max(left[i-1],height[i]);

        for(int i=n-2;i>=0;i--)
            right[i] = max(right[i+1],height[i]);

        for(int i=1;i<n-1;i++)
            count += (min(left[i],right[i])-height[i]);

        return count;
    }
};

// class Solution {
//   public:
//     int maxWater(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         int water = 0;
//         vector<int>left(n,0);
//         vector<int>right(n,0);
        
//         left[0] = arr[0];
//         for(int i=1;i<n;i++)
//             left[i] = max(left[i-1],arr[i]);
        
//         right[n-1] = arr[n-1];
//         for(int i=n-2;i>=0;i--)
//             right[i] = max(right[i+1],arr[i]);
            
        
//         for(int i=0;i<n;i++)
//             water += min(left[i],right[i]) - arr[i];
            
        
//         return water;
//     }
// };
