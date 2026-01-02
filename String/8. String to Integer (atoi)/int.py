class Solution:
    def myAtoi(self, s):
        # Code here
        res = 0
        sign = 1
        index  = 0
        n = len(s)
        
        # ignoring leading whitespace
        while index<n and s[index]==' ':
            index+=1
        
        # store the sign of a number
        while index<n and (s[index]=='-' or s[index]=='+'):
            if s[index] == '-':
                sign = -1
            index+=1
            
        while index<n and '0'<=s[index]<='9':
            res = res*10 + (ord(s[index]) - ord('0'))
            
            if res>2**31-1:
                return (2**31-1) if sign==1 else -2**31

            index+=1
            
        return sign*res
