class Solution:
    def concatenatedString(self,s1,s2):
        #code here
        ans = ""
        for ch in s1:
            if ch not in s2:
                ans += ch
                
        for ch in s2:
            if ch not in s1:
                ans += ch
                
        if len(ans)>=1:
            return ans
        return -1
        
