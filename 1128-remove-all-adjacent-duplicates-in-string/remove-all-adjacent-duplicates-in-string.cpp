class Solution {
public:
    string removeDuplicates(string s) {
       string result;
       for (char c : s) {
        //if there is some elements already in the bag then chech it is equal with its previous one or not
        if (!result.empty() && result.back() == c) result.pop_back();
        // if nothing in the array means empty and then add it
        else result.push_back(c);
       } 
       return result;
    }
};