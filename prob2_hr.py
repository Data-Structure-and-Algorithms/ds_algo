# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(val = None)
        node = dummy
        carry = 0
		
        while l1 and l2:
            val = l1.val+l2.val+carry
            curr = (val)%10
            carry = (val)//10
            
            node.next = ListNode(curr)
            node = node.next
            l1 = l1.next
            l2 = l2.next
        
        if not l1:
            l1 = l2
        
        while l1:
            val = l1.val+carry
            curr = (val)%10
            carry = (val)//10
            node.next = ListNode(curr)
            node = node.next
            l1 = l1.next
        
        if carry:
            node.next = ListNode(carry)
            node = node.next
        
        return dummy.next
      
        
        
