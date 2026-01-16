class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int left = 0, right = hours.size()-1, count = 0;
        while (left <= right) {
            if (hours[left] >= target) {
                count++;
                left++;
            }
            else if (hours[right] >= target) {
                count++;
                right--;
            }
            else {
                left++;
                right--;
            }
        }
        return count;
    }
};