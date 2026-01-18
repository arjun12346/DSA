class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        return result;
    }
};