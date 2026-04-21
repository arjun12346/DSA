class Solution {
    public int solve(int n, int[] dp) {
        if (n == 0 || n == 1 || n == 2) return n;
        // check if it is already calculated and stored in dp array or not 
        if (dp[n] != 0) {
            return dp[n];
        }
        return dp[n] = solve(n-1, dp) + solve(n-2, dp);
    }
    public int climbStairs(int n) {
        int[] dp = new int[n+1];
        return solve(n, dp);
    }
}