// Last updated: 1/26/2026, 8:37:44 AM
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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* rab = head;
        ListNode* tur = head;
        rab=head->next->next;
        while (rab != nullptr && rab->next != nullptr) {
            rab = rab->next->next;
            tur = tur->next;
        }
        tur->next=tur->next->next;
        
        return head;
    }
};