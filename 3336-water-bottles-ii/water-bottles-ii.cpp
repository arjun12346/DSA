class Solution {
public:
int checkEx(int num,int ex){
    int store=num;
    int ans=0;
    while(store>=ex){
        ans++;
        store=store-ex+1;
        ex++;
    }
    return ans;
}
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ori=numBottles;
        int finale = checkEx(numBottles,numExchange);
        return finale+ori;
        
    }
};