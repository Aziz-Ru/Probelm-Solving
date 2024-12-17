class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        unordered_set<string>ms;
        for(auto x:deadends){
            ms.insert(x);
        }
        if(ms.find("0000")!=ms.end())return -1;
        queue<pair<string,int>>q;
        unordered_set<string>visited;
        q.push({"0000",0});
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            string curr=x.first;
            if(curr==target) return x.second;
            for(int i=0;i<4;i++){
                for(auto d:{-1,1}){
                    int digit=(curr[i]-'0'+d+10)%10;
                    string newCombination=curr;
                    newCombination[i]='0'+digit;
                    if(visited.find(newCombination)==visited.end()&&ms.find(newCombination)==ms.end()){
                        visited.insert(newCombination);
                        q.push({newCombination,x.second+1});
                    }

             }
            }
            
        }
        return -1;


    }
};