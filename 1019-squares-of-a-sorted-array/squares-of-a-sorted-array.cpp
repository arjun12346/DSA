class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = n-1;
        while (i <= j) {
            if (i != j) {
            arr[i] *= arr[i];
            arr[j] *= arr[j];
            }
            if (i == j) {
                arr[i] *= arr[i];
            }
            i++;
            j--;
        }
        sort(begin(arr), end(arr));
        return arr;
    }
};