class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int count = 0;
        int freq[] = new int[128];
        int maxi = 0;
        while (right < n) {
            char ch = s.charAt(right);
            freq[ch]++;
            count++;
            while (freq[ch] > 1) {
                freq[s.charAt(left)]--;
                count--;
                left++;
            }
            maxi = Math.max(maxi, count);
            right++;
        }
        return maxi;
    }
}