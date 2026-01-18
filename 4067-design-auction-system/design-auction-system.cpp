class AuctionSystem {
public:
    unordered_map<int,unordered_map<int,int>>mp;
    unordered_map<int,set<pair<int,int>>>s;
    AuctionSystem() {
        mp.clear();
        s.clear();
    }
    
    void addBid(int userId, int itemId, int bidAmount) {
        if(mp[userId].find(itemId)!=mp[userId].end()){
            s[itemId].erase({mp[userId][itemId],userId});
        }
        mp[userId][itemId]=bidAmount;
        s[itemId].insert({bidAmount,userId});
    }
    
    void updateBid(int userId, int itemId, int newAmount) {
        addBid(userId,itemId,newAmount);
    }
    
    void removeBid(int userId, int itemId) {
        s[itemId].erase({mp[userId][itemId],userId});
        mp[userId].erase(itemId);
        if(mp[userId].empty()){
            mp.erase(userId);
        }
        if(s[itemId].empty()){
            s.erase(itemId);
        }
    }
    
    int getHighestBidder(int itemId) {
        if(s.find(itemId)==s.end()){
            return -1;
        }
        return s[itemId].rbegin()->second;
    }
};

/**
 * Your AuctionSystem object will be instantiated and called as such:
 * AuctionSystem* obj = new AuctionSystem();
 * obj->addBid(userId,itemId,bidAmount);
 * obj->updateBid(userId,itemId,newAmount);
 * obj->removeBid(userId,itemId);
 * int param_4 = obj->getHighestBidder(itemId);
 */