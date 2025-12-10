class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int mod = 1000000007;
        long long count = 1;
        for (int i = 1; i < complexity.size(); i++) {
            if (complexity[i] <= complexity[0]) return 0;
            count *= i;
            count %= mod;
        }
        return count;
    }
};