class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for (string word : words) {
            bool isConsistent = true;
            for (char ch : word) {
                if (allowed.find(ch) == string::npos) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) count++;
        }
        return count;
    }
};