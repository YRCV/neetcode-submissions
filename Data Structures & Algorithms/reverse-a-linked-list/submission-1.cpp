/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // store next pointer, set curr->next to previous node
        // previous node becomes current, current node becomes front
        // O(n) time O(1) space
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* front;
        while (curr != NULL){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
};
