class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
 // The important and main concept in this question is the array is divided into two parts the first part is from starting(0) to n which are the x1,x2,x3....xn and the second half from n to array size contains y1,y2,y3....yn
        int firstHalf = 0, secondHalf = n, ansPosition = 0;
        while (firstHalf < n && secondHalf < 2 * n) {
            ans[ansPosition++] = nums[firstHalf];
            ans[ansPosition++] = nums[secondHalf];
            firstHalf++;
            secondHalf++;
        }
        return ans;
    }
};