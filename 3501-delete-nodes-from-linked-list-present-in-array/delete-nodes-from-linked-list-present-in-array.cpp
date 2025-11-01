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
        if (head == nullptr) return nullptr;
        unordered_set<int> s(nums.begin() , nums.end());
        while (head != nullptr && s.count(head->val)) {
            head = head->next;
        }
        ListNode* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            if (s.count(curr->next->val)) {
                ListNode* nodeToDelete = curr->next;
                curr->next = curr->next->next;
                delete nodeToDelete;
            }
            else {
                curr = curr->next;
            }
        }
        return head;
    }
};