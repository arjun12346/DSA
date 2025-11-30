class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int rem = sum % p;
        if (rem == 0) return 0;
        unordered_map<int, int> seen;
        seen[0] = -1; // prefix before Array
        long long prefix = 0;
        int res = n;
        for (int i = 0; i < n; i++) {
            prefix = (prefix + nums[i]) % p;
            int target = (int) ((prefix - rem + p) % p);
             if (seen.count(target)) {
                res = min(res, i - seen[target]);
            }
            
            seen[(int)prefix] = i;
        }
        
        return res < n ? res : -1;
        }
};