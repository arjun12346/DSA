class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int evenIndexSum = 0, oddIndexSum = 0, totalSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            // case 1 count total sum of even index element
            if (i % 2 == 0) {
                evenIndexSum += nums[i];
            }
            // case 2 count the total sum at the even index
            else if (i % 2 != 0) {
                oddIndexSum += nums[i];
            }
        }
        // for the alternation sum for even index sum subtract odd index sum
        totalSum = evenIndexSum - oddIndexSum;
        return totalSum;
    }
};