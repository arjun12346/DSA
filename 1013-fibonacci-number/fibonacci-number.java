class Solution {
    // global array
    static int[] dp;
    public int getfib(int n) {
        // base case
        if (n <= 1) return n;
        if (dp[n] != 0) return dp[n];
        int ans = getfib(n-1) + getfib(n-2);
        dp[n] = ans;
        return ans;
    }
    public int fib(int n) {
        dp = new int[n+1];
        return getfib(n);
    }
}