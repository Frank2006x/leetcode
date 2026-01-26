// Last updated: 1/26/2026, 8:36:34 AM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        ListNode* temp=head;
        while(map[head->val]>0){
            head=head->next;
            temp=temp->next;
        }
        while(head->next!=nullptr){
            if(map[head->next->val]>0){
                head->next=head->next->next;
                
            }else{
                head=head->next;
            }

        }
        return temp;
    }
};