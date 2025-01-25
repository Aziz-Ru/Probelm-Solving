# Make Lexicographically Smallest Array by Swapping Elements

```
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& v, int limit) {
    int n=v.size();
    vector<int> curr(v.begin(),v.end());
    vector<queue<int>>vs;
    multimap<int,int> ind;
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        if(vs.size()!=0&& abs(vs[vs.size()-1].back()-v[i])<=limit ){
            vs[vs.size()-1].push(v[i]);
            ind.insert({v[i],vs.size()-1});
            
        }

        else{
            queue<int> s;
            s.push(v[i]);
            vs.push_back(s);
            ind.insert({v[i],vs.size()-1});
                
        }
    }

    vector<int>ans;
    for(auto x:curr){
        auto pos=ind.find(x);
        ans.push_back(vs[pos->second].front()); 
        vs[pos->second].pop();

    }
    return ans;

    }
};
```
