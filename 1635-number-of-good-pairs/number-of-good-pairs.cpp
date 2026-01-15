class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                   count++;
                }
            }
        }
        return count;
    }
};

// In the question one thing is asked and that is how many good pairs can make means the value of the both is same only then they are considered as good pairs and count that such pairs and return count