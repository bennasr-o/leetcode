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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* it = head;
        while (it) {
            ++length;
            it = it->next;
        }
        it = head;
        int i = 0;
        while (it) {
            ++i;
            it = it->next;
            if (i == length / 2) return it;
        }
        return head; // should never been reached
    }
};
