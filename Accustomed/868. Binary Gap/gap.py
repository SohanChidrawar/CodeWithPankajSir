class Solution:
    def binaryGap(self, n: int) -> int:
        # convert decimal to binary

        b = bin(n)[2:]

        prev = -1
        max_dist = 0

        for i, bit in enumerate(b):
            if bit == '1':
                if prev != -1:
                    max_dist = max(max_dist, i - prev)
                prev = i

        return max_dist
        
