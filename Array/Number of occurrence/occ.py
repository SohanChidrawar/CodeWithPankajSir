# TC : O(N)

class Solution:
    def countFreq(self, arr, target):
        # code here
        count = 0
        n = len(arr)
        
        for i in range(n):
            if arr[i]==target:
                count += 1
                
        return count
        
