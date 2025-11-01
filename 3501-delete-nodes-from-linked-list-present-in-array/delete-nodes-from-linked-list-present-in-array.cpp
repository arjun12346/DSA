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
    bool exists(vector<int>&nums, int x){
        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(x == nums[mid]) return true;
            else if (x > nums[mid]) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(),nums.end());
        ListNode* ans = new ListNode(0);
        ListNode* t = ans;
        ListNode* temp = head;
        while(temp){
            if(!exists(nums,temp->val)){
                t->next = new ListNode(temp->val);
                t = t->next;
            }
            temp = temp->next;
        }
        return ans->next;
    }
};