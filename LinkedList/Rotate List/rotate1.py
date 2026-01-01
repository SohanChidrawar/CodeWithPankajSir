'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

class Solution:
    
    def rotate(self,head,k):
        if k==0 or head is None:
            return head
        
        curr = head
        length = 1
        
        while curr.next is not None:
            curr = curr.next
            length += 1
            
        k = k%length
        
        if k==0:
            curr.next = None
            return head
        
        # make a circular LL
        curr.next = head
        
        # traverse the LL to find kth node
        curr = head
        
        for _ in range(1,k):
            curr = curr.next
            
        newhead = curr.next
        
        curr.next = None
        
        return newhead
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
