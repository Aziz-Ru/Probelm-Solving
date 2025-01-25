# Make Lexicographically Smallest Array by Swapping Elements

First we need make segement which diffrence num[i]-num[j] <= limit.to make segement we need to sort the array. 

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

```
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& v, int limit) {
    int n=v.size();
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        vp.push_back({v[i],i});
    };
    sort(vp.begin(),vp.end());
    vector<int>ans(n);
    int i=0,j=1;
    while(i<n){
        while(j<n && (vp[j].first-vp[j-1].first)<=limit)j++;
        vector<int>pos;
        for(int k=i;k<j;k++){
            pos.push_back(vp[k].second);
        }
        sort(pos.begin(),pos.end());
        for(int k=i;k<j;k++){
           ans[pos[k-i]]=vp[k].first;
        }
        i=j;
        j++;

    }
    return ans;

    }
};
```
