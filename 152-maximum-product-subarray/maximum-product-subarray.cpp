class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minIndex = nums[0];
        int maxIndex = nums[0];
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int v1 = nums[i];
            int v2 = minIndex * nums[i];
            int v3 = maxIndex * nums[i];
            maxIndex = max(v1, max(v2, v3));
            minIndex = min(v1, min(v2, v3));
            res = max(res, max(minIndex, maxIndex));
        }
        return res;
    }
};