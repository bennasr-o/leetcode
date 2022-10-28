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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* it = head;
        while (it) {
            ++length;
            it = it->next;
        }
        it = head;
        int i = 0;
        while (it) {
            if (length - n - 1 < 0) return it->next;
            else if (i == length - n - 1) {it->next = it->next->next;}
            else {}; //should never reach
            it = it->next;
            ++i;
        }
        return head;
    }
};
