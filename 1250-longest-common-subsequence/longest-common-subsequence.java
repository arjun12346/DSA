class Solution {
    public static int LCS(String x, String y, int n, int m, int[][] dp) {
        //base case
        if (n == 0 || m == 0) return 0;
        //check if it is already calculated
        if (dp[n][m] != -1) {
            return dp[n][m];
        }
        //choice diagram
        if (x.charAt(n-1) == y.charAt(m-1)) {
           dp[n][m] = 1 + LCS(x,y,n-1,m-1, dp);
        } else{
            dp[n][m] = Math.max(LCS(x,y,n-1, m, dp), LCS(x,y,n,m-1, dp));
        }
        return dp[n][m];
    }
    public int longestCommonSubsequence(String text1, String text2) {
        int[][] dp = new int[text1.length()+1][text2.length()+1];
        for (int i = 0; i < text1.length()+1; i++) {
            for (int j = 0; j < text2.length()+1; j++) {
                dp[i][j] = -1;
            }
        }
        return LCS(text1, text2, text1.length(), text2.length(), dp);
    }
}