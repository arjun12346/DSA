class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int maxLength = 0;
        int freq[] = new int[128];
        while (right < n) {
            char ch = s.charAt(right);
            freq[ch]++;
            // duplicates found
            while (freq[ch] > 1) {
                freq[s.charAt(left)]--;
                left++;
            }
            //current window is valid
            maxLength = Math.max(maxLength, right - left + 1);
            right++;

        }
        return maxLength;
    }
}