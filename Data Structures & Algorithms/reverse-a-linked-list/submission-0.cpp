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
        // iterate throguht he list, store the the head as temp_prev
        // go to next node, store node's next as temp_next. set node->next=temp_prev
        // repeat
        ListNode* temp_prev = nullptr;
        ListNode* curr = head;
        ListNode* temp_next = curr->next;
        while (curr != nullptr){
            temp_next = curr->next;
            curr->next = temp_prev;
            temp_prev = curr;
            curr = temp_next;
        }
        return temp_prev;
    }
};
