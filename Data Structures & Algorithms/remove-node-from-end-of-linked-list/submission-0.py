# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        left = dummy
        right = dummy

        for i in range(n):
            right = right.next

        while right.next:
            left = left.next
            right = right.next

        left.next = left.next.next

        return dummy.next
        # two pointers method
        # left ummy, right at head, with a loop move right n steps forward
        # after that, the gap between left and right is n + 1,
        # when right reaches the end, left is pointing to the nth node 
        # left.next = left.next.next removes the nth node
        # return dummy
        