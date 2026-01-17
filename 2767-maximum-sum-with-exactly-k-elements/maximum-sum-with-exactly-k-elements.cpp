class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;
        int mx = *max_element(begin(nums), end(nums));
        for (int i = 0; i < k; i++) {
            sum += mx;
            mx++;
        }
        return sum;
    }
};