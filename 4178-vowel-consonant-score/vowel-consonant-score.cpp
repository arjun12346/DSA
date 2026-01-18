class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, ch = 0;
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                v++;
            }
            else if (isalpha(c)) {
                ch++;
            }
        }
        if (ch == 0) return 0;
        return v / ch;
    }
};