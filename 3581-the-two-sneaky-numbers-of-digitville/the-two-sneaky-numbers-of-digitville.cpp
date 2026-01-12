class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> result;
        for (int i = 0; i < mp.size(); i++) {
            if (mp[i] > 1) {
                result.push_back(i);
            }
        }
        return result;
    }
};