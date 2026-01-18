class Solution {
public:
    string removeDuplicates(string s) {
        string bag = "";
        for (char c : s) {
            if (!bag.empty() && bag.back() == c) {
                bag.pop_back();
            } else {
                bag.push_back(c);
            }
        }
        return bag;
    }
};