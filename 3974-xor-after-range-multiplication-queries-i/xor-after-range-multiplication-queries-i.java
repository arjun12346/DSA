class Solution {
    public int xorAfterQueries(int[] nums, int[][] queries) {
        int MOD = (int)1e9 + 7;
        for (int i = 0; i < queries.length; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            int k = queries[i][2];
            int v = queries[i][3];
            for (int idx = l; idx <= r; idx += k) {
                nums[idx] = (int)((long) nums[idx] * (v) % MOD);
            }
        }
        int exorSum = 0;
        for (int num : nums) {
            exorSum ^= num;
        }
        return exorSum;
    }
}