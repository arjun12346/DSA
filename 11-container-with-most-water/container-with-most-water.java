class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length-1;
        int maxi = Integer.MIN_VALUE;
        while (left <= right) {
            int width = right - left;
            int h = Math.min(height[left], height[right]);
            int area = width * h;
            maxi = Math.max(area,maxi);
            if (height[left] < height[right]) {
                left++;
            } else if (height[left] > height[right]) {
                right--;
            } else {
                left++;
                right--;
            }
        }
        return maxi;
    }
}