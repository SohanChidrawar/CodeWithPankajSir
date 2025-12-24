class Solution:
    def missingNumber(self, arr):
        # code here
        arr.sort()
        
        res = 1
        
        for i in arr:
            if res == i:
                res+=1
            elif i>res:
                break
        return res
