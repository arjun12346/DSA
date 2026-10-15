class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length-1;
        int maxi = Integer.MIN_VALUE;
        while (left <= right) {
            int width = right - left;
            int h = Math.min(height[left], height[right]);
            int area = h * width;
            maxi = Math.max(area, maxi);
            if (height[left] < height[right]) {
                left++;
            } else if (height[right] < height[left]) {
                right--;
            }
            else {
                left++;
                right--;
            }
        }
        return maxi;
    }
}