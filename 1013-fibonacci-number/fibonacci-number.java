class Solution {
    public int getfib(int n, int[] dp) {
        // base case
        if (n <= 1) return n;
        if (dp[n] != 0) return dp[n]; // present in dp array or not
        int ans = getfib(n-1, dp) + getfib(n-2, dp);
        dp[n] = ans;
        return ans;
    }
    public int fib(int n) {
        int[] dp = new int[n+1]; // index from 0 to 1
        return getfib(n, dp);
    }
}