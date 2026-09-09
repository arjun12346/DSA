class Solution {
    public int pivotIndex(int[] nums) {
       int n = nums.length;
       int prefixArr[] = new int[n];
       prefixArr[0] = nums[0]; 
       for (int i = 1; i < n; i++) {
        prefixArr[i] = prefixArr[i-1] + nums[i];
       } 
       int totalSum = prefixArr[n-1];
       for (int i = 0; i < n; i++) {
        int leftsum = (i == 0) ? 0 : prefixArr[i-1];
        int rightsum = totalSum - prefixArr[i];
        if (leftsum == rightsum) {
            return i;
        }
       }
       return -1;
    }
}