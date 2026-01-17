class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int currentSum = 0;
            for (int j = 0; j < accounts[i].size(); j++) { //the second loop is running upto the ith the size because each customers data is in a single row  and this tells how many elements in that row
                currentSum += accounts[i][j];
            }
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};