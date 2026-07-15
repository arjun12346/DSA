class Solution {
    public int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for (int i = 1; i <= n; i++) {
            sumOdd += (2*i-1);
            sumEven += (2*i);
        }
        int minNum = Math.min(sumOdd, sumEven);
        for (int i = minNum; i > 0; i--) {
            if (sumOdd % i == 0 && sumEven % i == 0) {
                return i;
            }
        }
        return 0;
    }
}