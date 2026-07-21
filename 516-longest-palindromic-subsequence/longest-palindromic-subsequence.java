class Solution {
    public int LPS(String x, String y, int n, int m, int[][] dp) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (x.charAt(i-1) == y.charAt(j-1)) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    public int longestPalindromeSubseq(String s) {
        String sb = new StringBuilder(s).reverse().toString();
        int n = s.length();
        int dp[][] = new int[n+1][n+1];
        return LPS(s,sb,n,n,dp);
    }
}