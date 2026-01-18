class Solution {
    int solve(int i, int j, int val, vector<int>& costs){
        int left = i, right = j;
        int ans = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(costs[mid] <= val){
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }

public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {

        int n = capacity.size();
        vector<pair<int,int>> temp;

        for(int i = 0; i < n; i++){
            temp.push_back({costs[i], capacity[i]});
        }

        sort(temp.begin(), temp.end());

        vector<int> sortedCosts;
        for(auto &p : temp){
            sortedCosts.push_back(p.first);
        }

        vector<int> prefixmax(n);
        prefixmax[0] = temp[0].second;
        for(int i = 1; i < n; i++){
            prefixmax[i] = max(prefixmax[i-1], temp[i].second);
        }

        int maxi = 0;

        for(int i = n - 1; i > 0; i--){
            int val = budget- temp[i].first-1;
            if(val<0) continue;
            int index = solve(0, i - 1, val, sortedCosts);

            if(index != -1){
                maxi = max(maxi, prefixmax[index] + temp[i].second);
            }
        }

        for(auto &it : temp){
            if(it.first < budget){
                maxi = max(maxi, it.second);
            }
        }

        return maxi;
    }
};