class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int store = numBottles-1;
        int finale = numExchange-1;


        return numBottles+store/finale;
        
    }
};