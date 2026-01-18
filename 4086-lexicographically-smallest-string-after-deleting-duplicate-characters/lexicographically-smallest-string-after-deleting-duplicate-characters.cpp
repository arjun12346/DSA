const int Z = 26;
class Solution {
public:
    string lexSmallestAfterDeletion(string s) {
        int r[Z] = {};
        for (char c : s)
            ++r[c - 'a'];
        string ans;
        for (char c : s) {
            while (!ans.empty() && ans.back() > c && r[ans.back() - 'a'] > 1) {
                --r[ans.back() - 'a'];
                ans.pop_back();
            }
            ans += c;
        }
        while (!ans.empty() && r[ans.back() - 'a'] > 1) {
            --r[ans.back() - 'a'];
            ans.pop_back();
        }
        return ans;
    }
};