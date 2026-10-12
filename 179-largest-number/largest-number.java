
import java.util.Arrays;

class Solution {
    public String largestNumber(int[] nums) {

        // Step 1: Convert integers into strings
        String[] arr = new String[nums.length];

        for (int i = 0; i < nums.length; i++) {
            arr[i] = String.valueOf(nums[i]);
        }

        // Step 2: Custom sorting
        Arrays.sort(arr, (a, b) -> (b + a).compareTo(a + b));

        // Step 3: Handle the all-zero case
        if (arr[0].equals("0")) {
            return "0";
        }

        // Step 4: Build the final answer
        StringBuilder result = new StringBuilder();

        for (String s : arr) {
            result.append(s);
        }

        return result.toString();
    }
}

