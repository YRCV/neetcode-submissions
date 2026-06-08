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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // create a dummy anchor object, tail node points to it and acts as worker
        // compare list1 list2 values, tail->next points to smallest
        // advance both the smaller list and tail
        // if one list runs out (NULL), point tail->next to remainder of other list
        // O(m + n) time, O(1) space
        ListNode dummy;
        ListNode* tail = &dummy;

        while (list1 != NULL && list2 != NULL){
            if (list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        
        tail->next = (list1 != NULL) ? list1 : list2;

        return dummy.next;
    }
};
