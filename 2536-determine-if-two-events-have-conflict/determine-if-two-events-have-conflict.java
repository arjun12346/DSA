class Solution {
    public boolean haveConflict(String[] event1, String[] event2) {

        if (event1[0].compareTo(event2[0]) <= 0) {
            return event1[1].compareTo(event2[0]) >= 0;
        }

        return event2[1].compareTo(event1[0]) >= 0;
    }
}