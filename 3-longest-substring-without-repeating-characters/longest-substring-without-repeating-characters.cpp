class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0 , right = 0 , maxLen = 0;
        unordered_set<char> window;
        while (right < n) {
            if (window.find(s[right]) == window.end()) {
                window.insert(s[right]);
                maxLen = max(maxLen, right-left+1);
                right++;
            }
            else {
                window.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};