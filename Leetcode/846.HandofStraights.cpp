class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
        if(hand.size()%groupSize==0){
            map<int,int>um;
            for(int i=0;i<hand.size();i++){
                um[hand[i]]++;
            }
            
            while(!um.empty()){
                int start=um.begin()->first;
                for(int i=0;i<groupSize;i++){
                    int current = start + i;
                    if (um[current] == 0) {
                        return false;
                    }

                    if (--um[current] == 0) {
                        um.erase(current);
                    }
                }
            }
            

            return true;
        }
        // cout<<"FIrst False";
        return false;
    }
};
