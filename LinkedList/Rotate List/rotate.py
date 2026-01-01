class Solution:
    def rotate(self, head, k):
        # code here
        if k==0 or head is None:
            return head
            
        # rotate the list k time
        for _ in range(k):
            curr = head
            # traverse still last node
            while curr.next is not None:
                curr = curr.next
                
            curr.next = head
            curr = curr.next
            head = head.next
            curr.next = None
        
        return head
