class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            for (char val : words[i]) {
                if (val == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};