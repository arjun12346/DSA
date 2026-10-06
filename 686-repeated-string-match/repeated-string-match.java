class Solution {
    public int repeatedStringMatch(String a, String b) {
        int lps[] = new int[b.length()];
        int len = 0;
        int i = 1;
        while (i < b.length()) {
            if (b.charAt(i) == b.charAt(len)) {
                lps[i] = len + 1;
                len++;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len-1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        int count = (b.length() + a.length()-1) / a.length();
         for (int repeat = count; repeat <= count + 1; repeat++) {

            int j = 0; // pointer for b

            for (int k = 0; k < repeat * a.length(); k++) {

                char current = a.charAt(k % a.length());

                while (j > 0 && current != b.charAt(j)) {
                    j = lps[j - 1];
                }

                if (current == b.charAt(j)) {
                    j++;
                }

                if (j == b.length()) {
                    return repeat;
                }
            }
        }
        return -1;
    }
}