class Solution {
    public int twoCitySchedCost(int[][] costs) {

        Arrays.sort(costs, (a, b) ->
            (a[1] - a[0]) - (b[1] - b[0])
        );

        int n = costs.length;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            if (i < n / 2) {
                // First half → City B
                ans += costs[i][1];
            } else {
                // Second half → City A
                ans += costs[i][0];
            }
        }

        return ans;
    }
}