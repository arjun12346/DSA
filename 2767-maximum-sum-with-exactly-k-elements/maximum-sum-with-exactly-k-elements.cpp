class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int max = nums[nums.size()-1];
        for (int i = 1; i <= k; i++) {
            sum += max;
            max +=1;
        }
        return sum;
    }
};