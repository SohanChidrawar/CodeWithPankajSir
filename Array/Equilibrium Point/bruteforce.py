class Solution:
    #Function to find equilibrium point in the array.
    def findEquilibrium(self, arr):
        # code here
        n = len(arr)
        
        for i in range(n):
            leftsum = sum(arr[:i])
            
            rightsum = sum(arr[i+1:])
            
            if leftsum==rightsum:
                return i
                
        return -1
